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

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Request to save an EventStream.
   */
  class AWS_PINPOINT_API WriteEventStream
  {
  public:
    WriteEventStream();
    WriteEventStream(const Aws::Utils::Json::JsonValue& jsonValue);
    WriteEventStream& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline const Aws::String& GetDestinationStreamArn() const{ return m_destinationStreamArn; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(const Aws::String& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(Aws::String&& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(const char* value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline WriteEventStream& WithDestinationStreamArn(const Aws::String& value) { SetDestinationStreamArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline WriteEventStream& WithDestinationStreamArn(Aws::String&& value) { SetDestinationStreamArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline WriteEventStream& WithDestinationStreamArn(const char* value) { SetDestinationStreamArn(value); return *this;}


    /**
     * The external ID assigned the IAM role that authorizes Amazon Pinpoint to publish
     * to the stream.
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * The external ID assigned the IAM role that authorizes Amazon Pinpoint to publish
     * to the stream.
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * The external ID assigned the IAM role that authorizes Amazon Pinpoint to publish
     * to the stream.
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * The external ID assigned the IAM role that authorizes Amazon Pinpoint to publish
     * to the stream.
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * The external ID assigned the IAM role that authorizes Amazon Pinpoint to publish
     * to the stream.
     */
    inline WriteEventStream& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * The external ID assigned the IAM role that authorizes Amazon Pinpoint to publish
     * to the stream.
     */
    inline WriteEventStream& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * The external ID assigned the IAM role that authorizes Amazon Pinpoint to publish
     * to the stream.
     */
    inline WriteEventStream& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline WriteEventStream& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline WriteEventStream& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline WriteEventStream& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_destinationStreamArn;
    bool m_destinationStreamArnHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
