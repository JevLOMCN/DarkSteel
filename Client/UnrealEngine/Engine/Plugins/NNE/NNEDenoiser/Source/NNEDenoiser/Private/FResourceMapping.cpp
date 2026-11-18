// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 7

// Add @ 14eaebf00

void __thiscall
UE::NNEDenoiser::Private::FResourceMapping::Add(FResourceMapping *this,FResourceInfo *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  FResourceInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pFVar3 = (FResourceInfo *)(this->ChannelMapping).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ChannelMapping).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->ChannelMapping).ArrayNum;
  piVar1 = &(this->ChannelMapping).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  uVar2 = *(undefined8 *)param_1;
  (this->ChannelMapping).ArrayNum = iVar7 + 1;
  pFVar4 = (this->ChannelMapping).AllocatorInstance.Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = uVar2;
  *(int *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = param_1->Frame;
  return;
}

// Add_GetRef @ 14eaef320

FResourceInfo * __thiscall
UE::NNEDenoiser::Private::FResourceMapping::Add_GetRef
          (FResourceMapping *this,FResourceInfo *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FResourceInfo *pFVar7;
  
  pFVar7 = (FResourceInfo *)(this->ChannelMapping).AllocatorInstance.Data;
  if ((pFVar7 <= param_1) && (param_1 < pFVar7 + (this->ChannelMapping).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FResourceInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->ChannelMapping).ArrayNum;
  piVar1 = &(this->ChannelMapping).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  uVar2 = *(undefined8 *)param_1;
  (this->ChannelMapping).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ChannelMapping).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = uVar2;
  pFVar7 = (FResourceInfo *)(pFVar3 + (longlong)iVar6 * 0xc);
  pFVar7->Frame = param_1->Frame;
  return pFVar7;
}

// GetChannelMappingPerFrame @ 14eaf82f0

TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
UE::NNEDenoiser::Private::FResourceMapping::GetChannelMappingPerFrame
          (FResourceMapping *this,
          TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
          *__return_storage_ptr__,EResourceName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_38;
  undefined4 uStack_34;
  
  uVar9 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar4 = (this->ChannelMapping).ArrayNum;
  uVar10 = uVar9;
  if (0 < iVar4) {
    do {
      uVar8 = (uint)uVar9;
      uVar3 = 0;
      if ((int)uVar8 < iVar4) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
                  *)(*pcVar1)();
        return pTVar5;
      }
      pFVar7 = (this->ChannelMapping).AllocatorInstance.Data + uVar10;
      if (*pFVar7 == (FScriptContainerElement)param_1) {
        pTVar6 = TMapBase<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
                 ::FindOrAddImpl<int_const_&>
                           ((TMapBase<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
                             *)__return_storage_ptr__,*(uint *)(pFVar7 + 8),(int *)(pFVar7 + 8));
        uStack_34 = *(undefined4 *)(pFVar7 + 4);
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        local_38 = uVar8;
        if (((pFVar7 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar7 + (longlong)pTVar6->ArrayMax * 8)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
                    *)(*pcVar1)();
          return pTVar5;
        }
        iVar4 = pTVar6->ArrayNum;
        if (iVar4 == pTVar6->ArrayMax) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
        }
        pTVar6->ArrayNum = iVar4 + 1;
        *(ulonglong *)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 8) =
             CONCAT44(uStack_34,local_38);
      }
      iVar4 = (this->ChannelMapping).ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0xc;
    } while ((int)(uVar8 + 1) < iVar4);
  }
  return __return_storage_ptr__;
}

// GetChecked @ 14eaf8590

FResourceInfo * __thiscall
UE::NNEDenoiser::Private::FResourceMapping::GetChecked(FResourceMapping *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FResourceInfo *pFVar5;
  
  piVar1 = &(this->ChannelMapping).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Channel >= 0 && Channel < ChannelMapping.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceMapping.cpp"
                         ,0x3f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FResourceInfo *)(*pcVar2)();
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
    pFVar5 = (FResourceInfo *)(*pcVar2)();
    return pFVar5;
  }
  return (FResourceInfo *)((this->ChannelMapping).AllocatorInstance.Data + (longlong)param_1 * 0xc);
}

// HasResource @ 14eafa370

bool __thiscall
UE::NNEDenoiser::Private::FResourceMapping::HasResource
          (FResourceMapping *this,EResourceName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ChannelMapping).ArrayNum;
  pFVar3 = (this->ChannelMapping).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->ChannelMapping).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::NNEDenoiser::Private::FResourceInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 == (FScriptContainerElement)param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0xc;
  }
  return false;
}

// Num @ 14eafbfd0

int __thiscall UE::NNEDenoiser::Private::FResourceMapping::Num(FResourceMapping *this)

{
  return (this->ChannelMapping).ArrayNum;
}

// NumFrames @ 14eafc0c0

int __thiscall
UE::NNEDenoiser::Private::FResourceMapping::NumFrames(FResourceMapping *this,EResourceName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ChannelMapping).ArrayNum;
  pFVar4 = (this->ChannelMapping).AllocatorInstance.Data;
  iVar5 = 1;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->ChannelMapping).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::NNEDenoiser::Private::FResourceInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = iVar5;
    if ((*pFVar4 == (FScriptContainerElement)param_1) &&
       (iVar3 = *(int *)(pFVar4 + 8), iVar5 < *(int *)(pFVar4 + 8))) {
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    pFVar4 = pFVar4 + 0xc;
  }
  return 1 - iVar5;
}

