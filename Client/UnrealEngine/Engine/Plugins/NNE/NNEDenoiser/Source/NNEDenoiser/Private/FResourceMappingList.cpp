// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 10

// Add @ 14eaebfc0

void __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::Add
          (FResourceMappingList *this,FResourceMapping *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->InputMapping).AllocatorInstance.Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)(this->InputMapping).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->InputMapping).ArrayNum;
  piVar1 = &(this->InputMapping).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->InputMapping).ArrayNum = iVar4 + 1;
  pFVar5 = (this->InputMapping).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = (param_1->ChannelMapping).AllocatorInstance.Data;
  (param_1->ChannelMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + 8) = (param_1->ChannelMapping).ArrayNum;
  *(int *)(pFVar5 + 0xc) = (param_1->ChannelMapping).ArrayMax;
  (param_1->ChannelMapping).ArrayNum = 0;
  (param_1->ChannelMapping).ArrayMax = 0;
  pFVar5 = (param_1->ChannelMapping).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// Add_GetRef @ 14eaef3e0

FResourceMapping * __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::Add_GetRef
          (FResourceMappingList *this,FResourceMapping *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FResourceMapping *pFVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = (this->InputMapping).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->InputMapping).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FResourceMapping *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->InputMapping).ArrayNum;
  piVar1 = &(this->InputMapping).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->InputMapping).ArrayNum = iVar5 + 1;
  pFVar7 = (this->InputMapping).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  (((TArray<UE::NNEDenoiser::Private::FResourceInfo,TSizedDefaultAllocator<32>_> *)
   &pFVar7->field_0x0)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (((TArray<UE::NNEDenoiser::Private::FResourceInfo,TSizedDefaultAllocator<32>_> *)
   &pFVar7->field_0x0)->AllocatorInstance).Data = (param_1->ChannelMapping).AllocatorInstance.Data;
  (param_1->ChannelMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pFVar7[8].field_0x0 = (param_1->ChannelMapping).ArrayNum;
  *(int *)&pFVar7[0xc].field_0x0 = (param_1->ChannelMapping).ArrayMax;
  (param_1->ChannelMapping).ArrayNum = 0;
  (param_1->ChannelMapping).ArrayMax = 0;
  pFVar2 = (param_1->ChannelMapping).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (FResourceMapping *)pFVar7;
}

// Get @ 14eaf80f0

FResourceMapping * __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::Get(FResourceMappingList *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FResourceMapping *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->InputMapping).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FResourceMapping *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FResourceMapping *)
           ((this->InputMapping).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return (FResourceMapping *)0x0;
}

// GetChannelMappingPerFrame @ 14eaf84b0

TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::GetChannelMappingPerFrame
          (FResourceMappingList *this,
          TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
          *__return_storage_ptr__,int param_1,EResourceName param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  
  piVar1 = &(this->InputMapping).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputIndex >= 0 && InputIndex < InputMapping.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceMapping.cpp"
                         ,0xbf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
              *)(*pcVar2)();
    return pTVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
              *)(*pcVar2)();
    return pTVar5;
  }
  FResourceMapping::GetChannelMappingPerFrame
            ((FResourceMapping *)
             ((this->InputMapping).AllocatorInstance.Data + (longlong)param_1 * 0x10),
             __return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetChecked @ 14eaf8650

FResourceMapping * __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::GetChecked(FResourceMappingList *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FResourceMapping *pFVar5;
  
  piVar1 = &(this->InputMapping).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputIndex >= 0 && InputIndex < InputMapping.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceMapping.cpp"
                         ,0x89,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FResourceMapping *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FResourceMapping *)(*pcVar2)();
    return pFVar5;
  }
  return (FResourceMapping *)
         ((this->InputMapping).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// HasResource @ 14eafa3e0

bool __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::HasResource
          (FResourceMappingList *this,int param_1,EResourceName param_2)

{
  int *piVar1;
  EResourceName *pEVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  EResourceName *pEVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  piVar1 = &(this->InputMapping).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputIndex >= 0 && InputIndex < InputMapping.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceMapping.cpp"
                         ,0xb8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = 0;
  if (param_1 < *piVar1) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar9 = (this->InputMapping).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  iVar3 = *(int *)(pFVar9 + 8);
  pEVar8 = *(EResourceName **)pFVar9;
  pEVar2 = pEVar8 + (longlong)iVar3 * 0xc;
  while( true ) {
    if (*(int *)(pFVar9 + 8) != iVar3) {
      `TCheckedPointerIterator<UE::NNEDenoiser::Private::FResourceInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pEVar8 == pEVar2) break;
    if (*pEVar8 == param_2) {
      return true;
    }
    pEVar8 = pEVar8 + 0xc;
  }
  return false;
}

// HasResource @ 14eafa4e0

bool __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::HasResource
          (FResourceMappingList *this,EResourceName param_1)

{
  EResourceName *pEVar1;
  int iVar2;
  int iVar3;
  EResourceName *pEVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->InputMapping).ArrayNum;
  pFVar5 = (this->InputMapping).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->InputMapping).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::NNEDenoiser::Private::FResourceMapping_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    iVar3 = *(int *)(pFVar5 + 8);
    pEVar4 = *(EResourceName **)pFVar5;
    pEVar1 = pEVar4 + (longlong)iVar3 * 0xc;
    while( true ) {
      if (*(int *)(pFVar5 + 8) != iVar3) {
        `TCheckedPointerIterator<UE::NNEDenoiser::Private::FResourceInfo_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pEVar4 == pEVar1) break;
      if (*pEVar4 == param_1) {
        return true;
      }
      pEVar4 = pEVar4 + 0xc;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return false;
}

// Num @ 14eafbfe0

int __thiscall UE::NNEDenoiser::Private::FResourceMappingList::Num(FResourceMappingList *this)

{
  return (this->InputMapping).ArrayNum;
}

// NumChannels @ 14eafbff0

int __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::NumChannels(FResourceMappingList *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &(this->InputMapping).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputIndex >= 0 && InputIndex < InputMapping.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceMapping.cpp"
                         ,0x95,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return *(int *)((this->InputMapping).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
}

// NumFrames @ 14eafc140

int __thiscall
UE::NNEDenoiser::Private::FResourceMappingList::NumFrames
          (FResourceMappingList *this,EResourceName param_1)

{
  EResourceName *pEVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  EResourceName *pEVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  uint local_res20;
  
  pFVar7 = (this->InputMapping).AllocatorInstance.Data;
  local_res20 = (this->InputMapping).ArrayNum;
  uVar4 = (ulonglong)(int)local_res20;
  pFVar9 = pFVar7 + uVar4 * 0x10;
  iVar2 = 0;
  while( true ) {
    iVar8 = iVar2;
    if ((this->InputMapping).ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<UE::NNEDenoiser::Private::FResourceMapping_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar9) break;
    iVar2 = *(int *)(pFVar7 + 8);
    uVar6 = Albedo;
    pEVar5 = *(EResourceName **)pFVar7;
    pEVar1 = pEVar5 + (longlong)iVar2 * 0xc;
    while( true ) {
      if (*(int *)(pFVar7 + 8) != iVar2) {
        `TCheckedPointerIterator<UE::NNEDenoiser::Private::FResourceInfo_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pEVar5 == pEVar1) break;
      uVar3 = uVar6;
      if ((*pEVar5 == param_1) &&
         (uVar3 = *(undefined4 *)(pEVar5 + 8), (int)uVar6 < (int)*(undefined4 *)(pEVar5 + 8))) {
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      pEVar5 = pEVar5 + 0xc;
    }
    uVar4 = (ulonglong)local_res20;
    pFVar7 = pFVar7 + 0x10;
    iVar2 = 1 - uVar6;
    if (1 - uVar6 <= iVar8) {
      iVar2 = iVar8;
    }
  }
  return iVar8;
}

