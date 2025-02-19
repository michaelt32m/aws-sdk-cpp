﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{
  class RegisterAVSDeviceResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API RegisterAVSDeviceResult();
    AWS_ALEXAFORBUSINESS_API RegisterAVSDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API RegisterAVSDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArn = value; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArn.assign(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline RegisterAVSDeviceResult& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline RegisterAVSDeviceResult& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline RegisterAVSDeviceResult& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RegisterAVSDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RegisterAVSDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RegisterAVSDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_deviceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
