// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FRHIUniformBufferLayout @ 145c88230

FRHIUniformBufferLayout * __thiscall
FRHIUniformBufferLayout::FRHIUniformBufferLayout
          (FRHIUniformBufferLayout *this,FRHIUniformBufferLayoutInitializer *param_1)

{
  FString *pFVar1;
  TArray<FRHIUniformBufferResource,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FString *pFVar9;
  FRHIUniformBufferLayout *pFVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FString local_28;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_UniformBufferLayout);
  this->_padding_ = (longlong)&___7FRHIUniformBufferLayout__6B_;
  pFVar1 = &this->Name;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  iVar4 = (param_1->Name).Data.ArrayNum;
  iVar5 = iVar4 + -1;
  iVar13 = 0;
  if (iVar4 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = *(wchar_t **)&(param_1->Name).Data.AllocatorInstance;
    iVar13 = iVar5;
    if (((ulonglong)pwVar11 & 1) != 0) {
      pwVar11 = (wchar_t *)
                ((longlong)&(param_1->Name).Data.AllocatorInstance.field_0x0 +
                ((longlong)pwVar11 >> 0x18));
    }
  }
  pFVar9 = ::FString::ConstructFromPtrSize(&local_28,pwVar11,iVar13);
  if (pFVar1 != pFVar9) {
    pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Name).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (this->Name).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar12 = (param_1->Resources).AllocatorInstance;
  pTVar2 = &this->Resources;
  if (((ulonglong)FVar12 & 1) != 0) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(param_1->Resources).AllocatorInstance.field_0x0 +
             ((longlong)FVar12 >> 0x18));
  }
  iVar5 = (param_1->Resources).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIUniformBufferLayout *)(*pcVar7)();
    return pFVar10;
  }
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Resources).ArrayMax;
  (this->Resources).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,(void *)FVar12,(longlong)iVar5 << 2);
  }
  FVar12 = (param_1->GraphResources).AllocatorInstance;
  pTVar2 = &this->GraphResources;
  if (((ulonglong)FVar12 & 1) != 0) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(param_1->GraphResources).AllocatorInstance.field_0x0 +
             ((longlong)FVar12 >> 0x18));
  }
  iVar5 = (param_1->GraphResources).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIUniformBufferLayout *)(*pcVar7)();
    return pFVar10;
  }
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->GraphResources).ArrayMax;
  (this->GraphResources).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,(void *)FVar12,(longlong)iVar5 << 2);
  }
  FVar12 = (param_1->GraphTextures).AllocatorInstance;
  pTVar2 = &this->GraphTextures;
  if (((ulonglong)FVar12 & 1) != 0) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(param_1->GraphTextures).AllocatorInstance.field_0x0 +
             ((longlong)FVar12 >> 0x18));
  }
  iVar5 = (param_1->GraphTextures).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIUniformBufferLayout *)(*pcVar7)();
    return pFVar10;
  }
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->GraphTextures).ArrayMax;
  (this->GraphTextures).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,(void *)FVar12,(longlong)iVar5 << 2);
  }
  FVar12 = (param_1->GraphBuffers).AllocatorInstance;
  pTVar2 = &this->GraphBuffers;
  if (((ulonglong)FVar12 & 1) != 0) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(param_1->GraphBuffers).AllocatorInstance.field_0x0 +
             ((longlong)FVar12 >> 0x18));
  }
  iVar5 = (param_1->GraphBuffers).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIUniformBufferLayout *)(*pcVar7)();
    return pFVar10;
  }
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->GraphBuffers).ArrayMax;
  (this->GraphBuffers).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,(void *)FVar12,(longlong)iVar5 << 2);
  }
  FVar12 = (param_1->GraphUniformBuffers).AllocatorInstance;
  pTVar2 = &this->GraphUniformBuffers;
  if (((ulonglong)FVar12 & 1) != 0) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(param_1->GraphUniformBuffers).AllocatorInstance.field_0x0 +
             ((longlong)FVar12 >> 0x18));
  }
  iVar5 = (param_1->GraphUniformBuffers).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIUniformBufferLayout *)(*pcVar7)();
    return pFVar10;
  }
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->GraphUniformBuffers).ArrayMax;
  (this->GraphUniformBuffers).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,(void *)FVar12,(longlong)iVar5 << 2);
  }
  FVar12 = (param_1->UniformBuffers).AllocatorInstance;
  pTVar2 = &this->UniformBuffers;
  if (((ulonglong)FVar12 & 1) != 0) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(param_1->UniformBuffers).AllocatorInstance.field_0x0 +
             ((longlong)FVar12 >> 0x18));
  }
  iVar5 = (param_1->UniformBuffers).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIUniformBufferLayout *)(*pcVar7)();
    return pFVar10;
  }
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->UniformBuffers).ArrayMax;
  (this->UniformBuffers).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,(void *)FVar12,(longlong)iVar5 << 2);
  }
  this->Hash = param_1->Hash;
  this->ConstantBufferSize = param_1->ConstantBufferSize;
  this->RenderTargetsOffset = param_1->RenderTargetsOffset;
  this->StaticSlot = param_1->StaticSlot;
  this->BindingFlags = param_1->BindingFlags;
  this->Flags = param_1->Flags;
  return this;
}

