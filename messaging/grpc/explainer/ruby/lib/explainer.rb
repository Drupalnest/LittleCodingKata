# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: explainer.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "explainer.ExplainerRequest" do
    optional :problem, :string, 1
  end
  add_message "explainer.ExplainerReply" do
    optional :explanation, :string, 1
  end
end

module Explainer
  ExplainerRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("explainer.ExplainerRequest").msgclass
  ExplainerReply = Google::Protobuf::DescriptorPool.generated_pool.lookup("explainer.ExplainerReply").msgclass
end