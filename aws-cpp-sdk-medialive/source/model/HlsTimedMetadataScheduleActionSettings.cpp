﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/medialive/model/HlsTimedMetadataScheduleActionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

HlsTimedMetadataScheduleActionSettings::HlsTimedMetadataScheduleActionSettings() : 
    m_id3HasBeenSet(false)
{
}

HlsTimedMetadataScheduleActionSettings::HlsTimedMetadataScheduleActionSettings(JsonView jsonValue) : 
    m_id3HasBeenSet(false)
{
  *this = jsonValue;
}

HlsTimedMetadataScheduleActionSettings& HlsTimedMetadataScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id3"))
  {
    m_id3 = jsonValue.GetString("id3");

    m_id3HasBeenSet = true;
  }

  return *this;
}

JsonValue HlsTimedMetadataScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_id3HasBeenSet)
  {
   payload.WithString("id3", m_id3);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
