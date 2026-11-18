// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FMIDData @ 1479a3770

FMIDData * __thiscall
FTextRenderComponentMIDCache::FMIDData::FMIDData
          (FMIDData *this,UMaterialInterface *param_1,UFont *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMIDData *pFVar6;
  UClass *pUVar7;
  FMaterialParameterInfo *pFVar8;
  UMaterialInstanceDynamic *pUVar9;
  FMaterialParameterInfo *pFVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  UMaterialInterface *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  UMaterialInstanceDynamic *local_78;
  UMaterialInstanceDynamic *local_70;
  undefined8 local_68;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_60 [2];
  
  pUVar9 = (UMaterialInstanceDynamic *)0x0;
  piVar1 = &(this->MIDs).ArrayMax;
  (this->MIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MIDs).ArrayNum = 0;
  *piVar1 = 0;
  (this->FontParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontParameters).ArrayNum = 0;
  (this->FontParameters).ArrayMax = 0;
  local_res10 = param_1;
  if ((((param_1 == (UMaterialInterface *)0x0) || (param_2 == (UFont *)0x0)) ||
      (param_2->FontCacheType != Offline)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMaterial && InFont && InFont->FontCacheType == EFontCacheType::Offline",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                         ,0x144,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMIDData *)(*pcVar3)();
    return pFVar6;
  }
  this->bIsCustomMID = false;
  iVar5 = (param_2->Textures).ArrayNum;
  if (GIsRequestingExit != false) {
    return this;
  }
  if (iVar5 < 1) {
    return this;
  }
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  local_res20 = iVar5;
  UMaterialInterface::GetAllFontParameterInfo(param_1,&this->FontParameters,local_60);
  if ((this->FontParameters).ArrayNum < 1) goto LAB_1479a3adf;
  bVar4 = UObjectBaseUtility::IsA<UMaterialInstanceDynamic>((UObjectBaseUtility *)param_1);
  if (!bVar4) {
    if (*piVar1 < iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,(ForAnyElementType *)this,(this->MIDs).ArrayNum,piVar1);
    }
    local_68 = 0;
    do {
      local_70 = UMaterialInstanceDynamic::Create(param_1,(UObject *)0x0,(FName)0x0);
      iVar5 = (this->FontParameters).ArrayNum;
      pFVar8 = (FMaterialParameterInfo *)(this->FontParameters).AllocatorInstance.Data;
      pFVar10 = pFVar8 + iVar5;
      while( true ) {
        if ((this->FontParameters).ArrayNum != iVar5) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar8 == pFVar10) break;
        UMaterialInstanceDynamic::SetFontParameterValue(local_70,pFVar8,param_2,(int)pUVar9);
        pFVar8 = pFVar8 + 1;
      }
      pFVar2 = (this->MIDs).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_70) &&
          ((FScriptContainerElement *)&local_70 < pFVar2 + (longlong)(this->MIDs).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FMIDData *)(*pcVar3)();
        return pFVar6;
      }
      iVar5 = (this->MIDs).ArrayNum;
      if (iVar5 == (this->MIDs).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->MIDs).ArrayMax);
      }
      (this->MIDs).ArrayNum = iVar5 + 1;
      *(UMaterialInstanceDynamic **)((this->MIDs).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           local_70;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_70 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_70);
      }
      uVar11 = (int)pUVar9 + 1;
      pUVar9 = (UMaterialInstanceDynamic *)(ulonglong)uVar11;
      param_1 = local_res10;
    } while ((int)uVar11 < local_res20);
    goto LAB_1479a3adf;
  }
  this->bIsCustomMID = true;
  if (param_1 == (UMaterialInterface *)0x0) {
LAB_1479a3860:
    local_78 = pUVar9;
  }
  else {
    pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       (local_78 = (UMaterialInstanceDynamic *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
       != &pUVar7->_padding_)) goto LAB_1479a3860;
  }
  iVar5 = (this->FontParameters).ArrayNum;
  pFVar8 = (FMaterialParameterInfo *)(this->FontParameters).AllocatorInstance.Data;
  pFVar10 = pFVar8 + iVar5;
  while( true ) {
    if ((this->FontParameters).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar10) break;
    UMaterialInstanceDynamic::SetFontParameterValue(local_78,pFVar8,param_2,0);
    pFVar8 = pFVar8 + 1;
  }
  pFVar2 = (this->MIDs).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)*piVar1 * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMIDData *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->MIDs).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->MIDs).ArrayNum = iVar5 + 1;
  *(UMaterialInstanceDynamic **)((this->MIDs).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78);
  }
LAB_1479a3adf:
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return this;
}

