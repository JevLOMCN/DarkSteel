// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 1497221e0

UScriptStruct * __cdecl FPCGInteractiveToolDataContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolDataContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInteractiveToolDataContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInteractiveToolDataContainer,
                         (UObject *)pUVar1,L"PCGInteractiveToolDataContainer");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolDataContainer.OuterSingleton;
}

// ~FPCGInteractiveToolDataContainer @ 149725cf0

void __thiscall
FPCGInteractiveToolDataContainer::~FPCGInteractiveToolDataContainer
          (FPCGInteractiveToolDataContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TInstancedStruct<FPCGInteractiveToolWorkingBaseData>,int>
            ((TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)
             (this->ToolData).AllocatorInstance.Data,(this->ToolData).ArrayNum);
  pFVar1 = (this->ToolData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FindMutableToolDataStruct @ 1498b3a60

TInstancedStruct<FPCGInteractiveToolWorkingBaseData> * __thiscall
FPCGInteractiveToolDataContainer::FindMutableToolDataStruct
          (FPCGInteractiveToolDataContainer *this,FName param_1)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  FName local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res18 [2];
  
  iVar1 = (this->ToolData).ArrayNum;
  pFVar9 = (this->ToolData).AllocatorInstance.Data;
  local_res10.Number = param_1.Number;
  uVar5 = local_res10.Number;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  local_res10 = param_1;
  do {
    if ((this->ToolData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TInstancedStruct<FPCGInteractiveToolWorkingBaseData>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar9 == pFVar8) {
      return (TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)0x0;
    }
    puVar3 = *(uchar **)&pFVar9[8].field_0x0;
    local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)
                 (((FInstancedStruct *)&pFVar9->field_0x0)->ScriptStruct).field0_0x0.DebugPtr;
    if ((puVar3 != (uchar *)0x0) && (local_res8.DebugPtr != (UScriptStruct *)0x0)) {
      pUVar7 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
      if (local_res8.DebugPtr != pUVar7) {
        pUVar7 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)(local_res8.DebugPtr)->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar2 * 8)
              != &pUVar7->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) goto LAB_1498b3b1a;
        }
        local_res18[0] = &local_res8;
        bVar6 = `UE::StructUtils::
                GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>'
                ::__l7::<lambda_1>::operator()(local_res18);
        if (!bVar6) goto LAB_1498b3b2b;
      }
LAB_1498b3b1a:
      uVar4 = *(undefined8 *)(puVar3 + 8);
      if (((uint)uVar4 == param_1.ComparisonIndex.Value.Value) &&
         ((uint)((ulonglong)uVar4 >> 0x20) == uVar5)) {
        return (TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)pFVar9;
      }
    }
LAB_1498b3b2b:
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// FindToolDataStruct @ 1498b4b40

TInstancedStruct<FPCGInteractiveToolWorkingBaseData> * __thiscall
FPCGInteractiveToolDataContainer::FindToolDataStruct
          (FPCGInteractiveToolDataContainer *this,FName param_1)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  FName local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res18 [2];
  
  iVar1 = (this->ToolData).ArrayNum;
  pFVar9 = (this->ToolData).AllocatorInstance.Data;
  local_res10.Number = param_1.Number;
  uVar5 = local_res10.Number;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  local_res10 = param_1;
  do {
    if ((this->ToolData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TInstancedStruct<FPCGInteractiveToolWorkingBaseData>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar9 == pFVar8) {
      return (TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)0x0;
    }
    puVar3 = *(uchar **)&pFVar9[8].field_0x0;
    local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)
                 (((FInstancedStruct *)&pFVar9->field_0x0)->ScriptStruct).field0_0x0.DebugPtr;
    if ((puVar3 != (uchar *)0x0) && (local_res8.DebugPtr != (UScriptStruct *)0x0)) {
      pUVar7 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
      if (local_res8.DebugPtr != pUVar7) {
        pUVar7 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)(local_res8.DebugPtr)->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar2 * 8)
              != &pUVar7->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) goto LAB_1498b4bfa;
        }
        local_res18[0] = &local_res8;
        bVar6 = `UE::StructUtils::
                GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>'
                ::__l7::<lambda_1>::operator()(local_res18);
        if (!bVar6) goto LAB_1498b4c0b;
      }
LAB_1498b4bfa:
      uVar4 = *(undefined8 *)(puVar3 + 8);
      if (((uint)uVar4 == param_1.ComparisonIndex.Value.Value) &&
         ((uint)((ulonglong)uVar4 >> 0x20) == uVar5)) {
        return (TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)pFVar9;
      }
    }
LAB_1498b4c0b:
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// RemoveToolData @ 1498d6ab0

int __thiscall
FPCGInteractiveToolDataContainer::RemoveToolData
          (FPCGInteractiveToolDataContainer *this,FName param_1)

{
  TArray<TInstancedStruct<FPCGInteractiveToolWorkingBaseData>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UScriptStruct *pUVar10;
  FInstancedStruct *this_00;
  uint uVar11;
  longlong lVar12;
  int local_res8;
  uint uStackX_14;
  UScriptStruct *local_res18;
  UScriptStruct **local_res20;
  
  pTVar1 = &this->ToolData;
  iVar8 = 0;
  uVar11 = 0;
  local_res8 = 0;
  do {
    while( true ) {
      if (((int)uVar11 < 0) || ((this->ToolData).ArrayNum <= (int)uVar11)) {
        return iVar8;
      }
      if (((int)uVar11 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar8 = local_res8, bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      lVar12 = (longlong)(int)uVar11 * 0x10;
      lVar4 = *(longlong *)(pFVar3 + lVar12 + 8);
      local_res18 = *(UScriptStruct **)(pFVar3 + lVar12);
      if ((lVar4 != 0) && (local_res18 != (UScriptStruct *)0x0)) break;
LAB_1498d6ca7:
      uVar11 = uVar11 + 1;
    }
    pUVar10 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
    if (local_res18 != pUVar10) {
      pUVar10 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
      if (pUVar10 != (UScriptStruct *)0x0) {
        iVar8 = (int)pUVar10->_padding_;
        if (((int)local_res18->_padding_ < iVar8) ||
           ((longlong *)*(undefined1 **)(local_res18->_padding_ + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) goto LAB_1498d6be0;
      }
      local_res20 = &local_res18;
      bVar7 = `UE::StructUtils::
              GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>'::
              __l7::<lambda_1>::operator()(&local_res20);
      iVar8 = local_res8;
      if (!bVar7) goto LAB_1498d6ca7;
    }
LAB_1498d6be0:
    uVar5 = *(undefined8 *)(lVar4 + 8);
    iVar8 = local_res8;
    if (((uint)uVar5 != param_1.ComparisonIndex.Value.Value) ||
       (uStackX_14 = param_1.Number, (uint)((ulonglong)uVar5 >> 0x20) != uStackX_14))
    goto LAB_1498d6ca7;
    uVar9 = 0;
    if ((int)uVar11 < (this->ToolData).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    this_00 = (FInstancedStruct *)((pTVar1->AllocatorInstance).Data + lVar12);
    FInstancedStruct::Reset(this_00);
    iVar8 = (this->ToolData).ArrayNum + ~uVar11;
    if (iVar8 != 0) {
      memmove(this_00,this_00 + 1,(longlong)iVar8 << 4);
    }
    piVar2 = &(this->ToolData).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar1->AllocatorInstance,(this->ToolData).ArrayNum,
               &(this->ToolData).ArrayMax);
    iVar8 = local_res8 + 1;
    local_res8 = iVar8;
  } while( true );
}

