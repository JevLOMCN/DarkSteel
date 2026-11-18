// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// BuildStructMetadata @ 1454e3720

FShaderParametersMetadata * __cdecl
FSceneUniformBufferTypeRegistry::FImpl::BuildStructMetadata(void)

{
  int *piVar1;
  FMemberInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FShaderParametersMetadata *pFVar8;
  ulonglong uVar9;
  TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  int iVar15;
  TLess<void> local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_58;
  uint local_50;
  uint local_4c;
  FShaderParametersMetadataBuilder local_48;
  
  pTVar10 = (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0;
  if ((GSceneUniformBufferMemberRegistrationInstances ==
       (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar7 = ::operator_new(0x10), GSceneUniformBufferMemberRegistrationInstances = pTVar10,
     pTVar7 != (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0))
  {
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    GSceneUniformBufferMemberRegistrationInstances = pTVar7;
  }
  pTVar7 = GSceneUniformBufferMemberRegistrationInstances;
  pFVar12 = (GSceneUniformBufferMemberRegistrationInstances->AllocatorInstance).Data;
  iVar15 = GSceneUniformBufferMemberRegistrationInstances->ArrayNum;
  pFVar13 = pFVar12 + (longlong)iVar15 * 8;
  while( true ) {
    if (pTVar7->ArrayNum != iVar15) {
      local_res8[0] = (TLess<void>)0x0;
      `TCheckedPointerIterator<FSceneUniformBufferMemberRegistration_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) break;
    (**(code **)**(undefined8 **)pFVar12)();
    pFVar12 = pFVar12 + 8;
  }
  if ((GSceneUniformBufferMemberRegistrationInstances ==
       (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar7 = ::operator_new(0x10), GSceneUniformBufferMemberRegistrationInstances = pTVar10,
     pTVar7 != (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0))
  {
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    GSceneUniformBufferMemberRegistrationInstances = pTVar7;
  }
  pTVar7 = GSceneUniformBufferMemberRegistrationInstances;
  piVar1 = &GSceneUniformBufferMemberRegistrationInstances->ArrayMax;
  GSceneUniformBufferMemberRegistrationInstances->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar7->AllocatorInstance,0,piVar1);
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_4c = 0;
  iVar15 = MemberInfos.ArrayNum;
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(MemberInfos._8_8_ & 0xffffffff);
  }
  if (0 < iVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar15,&local_58,0,(int *)&local_4c);
    pTVar10 = (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)
              (ulonglong)local_50;
  }
  iVar15 = MemberInfos.ArrayNum;
  pFVar13 = MemberInfos.AllocatorInstance.Data + (longlong)iVar15 * 0x50;
  FVar14.Data = MemberInfos.AllocatorInstance.Data;
  while( true ) {
    uVar5 = (uint)pTVar10;
    if (MemberInfos.ArrayNum != iVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FSceneUniformBufferTypeRegistry::FMemberInfo,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
      uVar5 = local_50;
    }
    if (FVar14.Data == pFVar13) break;
    if (uVar5 == local_4c) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_58,(int *)&local_4c);
    }
    local_50 = uVar5 + 1;
    *(FScriptContainerElement **)(local_58.Data + (longlong)(int)uVar5 * 8) = FVar14.Data;
    FVar14.Data = FVar14.Data + 0x50;
    pTVar10 = (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)
              (ulonglong)local_50;
  }
  AlgoImpl::
  IntroSortInternal<FSceneUniformBufferTypeRegistry::FMemberInfo_*,int,UE::Core::Private::TProjectionMemberData<FString_FSceneUniformBufferTypeRegistry::FMemberInfo::*>,TLess<void>_>
            ((FMemberInfo **)local_58.Data,uVar5,
             (TProjectionMemberData<FString_FSceneUniformBufferTypeRegistry::FMemberInfo::*>)0x8,
             local_res8[0]);
  uVar5 = local_50;
  uVar9 = (ulonglong)(int)local_50;
  local_48.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Members.ArrayNum = 0;
  local_48.Members.ArrayMax = 0;
  local_48.NextMemberOffset = 0;
  pFVar13 = local_58.Data + uVar9 * 8;
  FVar14.Data = local_58.Data;
  while( true ) {
    if ((uint)uVar9 != uVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FSceneUniformBufferTypeRegistry::FMemberInfo_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar14.Data == pFVar13) break;
    pFVar2 = *(FMemberInfo **)FVar14.Data;
    if ((pFVar2->Name).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar2->Name).Data.AllocatorInstance.Data;
    }
    uVar6 = FShaderParametersMetadataBuilder::AddNestedStruct
                      (&local_48,pwVar11,pFVar2->Metadata,Float);
    pFVar2->Offset = uVar6;
    FVar14.Data = FVar14.Data + 8;
    uVar9 = (ulonglong)local_50;
  }
  bStructMetadataWasBuilt = true;
  pFVar8 = FShaderParametersMetadataBuilder::Build
                     (&local_48,UniformBuffer,StaticAndShader,L"FSceneUniformParameters",
                      L"FSceneUniformParameters",L"Scene",L"Scene",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                      ,0x6e,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
  if ((0x1000 < pFVar8->Size) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metadata->GetSize() <= FSceneUniformParameters::MaxSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                         ,100,
                         L"The total size of the scene uniform buffer members exceeds the storage capacity in FSceneUniformParameters::Data. Increase the capacity."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FShaderParametersMetadata *)(*pcVar3)();
    return pFVar8;
  }
  if (local_48.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Members.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return pFVar8;
}

