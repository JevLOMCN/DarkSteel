// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// Execute @ 144bbbf50

void __thiscall
GPUMessage::TLambdaHandler<`FLightGridFeedbackStatus::InitRHI'::__l2::<lambda_1>_>::Execute
          (void *this,FReader *param_1)

{
  FReader local_28;
  
  local_28.MessageId.Index = (param_1->MessageId).Index;
  local_28.PayloadSize = param_1->PayloadSize;
  local_28.PayloadData = param_1->PayloadData;
  local_28.ReadOffset = param_1->ReadOffset;
  local_28._20_4_ = *(undefined4 *)&param_1->field_0x14;
  `FLightGridFeedbackStatus::InitRHI'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),&local_28);
  return;
}

// Execute @ 145059330

void __thiscall
GPUMessage::TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::__l2::<lambda_1>_>::Execute
          (void *this,FReader *param_1)

{
  FReader local_28;
  
  local_28.MessageId.Index = (param_1->MessageId).Index;
  local_28.PayloadSize = param_1->PayloadSize;
  local_28.PayloadData = param_1->PayloadData;
  local_28.ReadOffset = param_1->ReadOffset;
  local_28._20_4_ = *(undefined4 *)&param_1->field_0x14;
  `Nanite::FFeedbackManager::FFeedbackManager'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),&local_28);
  return;
}

// Execute @ 1457e3600

void __thiscall
GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_1>_>::
Execute(void *this,FReader *param_1)

{
  FReader local_28;
  
  local_28.MessageId.Index = (param_1->MessageId).Index;
  local_28.PayloadSize = param_1->PayloadSize;
  local_28.PayloadData = param_1->PayloadData;
  local_28.ReadOffset = param_1->ReadOffset;
  local_28._20_4_ = *(undefined4 *)&param_1->field_0x14;
  `FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),&local_28);
  return;
}

// Execute @ 1457e3630

void __thiscall
GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>_>::
Execute(void *this,FReader *param_1)

{
  FReader local_28;
  
  local_28.MessageId.Index = (param_1->MessageId).Index;
  local_28.PayloadSize = param_1->PayloadSize;
  local_28.PayloadData = param_1->PayloadData;
  local_28.ReadOffset = param_1->ReadOffset;
  local_28._20_4_ = *(undefined4 *)&param_1->field_0x14;
  `FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),&local_28);
  return;
}

