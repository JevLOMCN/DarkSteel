// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// operator== @ 142164620

bool __thiscall
UE::FPropertyPathName::operator==(FPropertyPathName *this,FPropertyPathName *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar1 = (this->Segments).ArrayNum;
  if (iVar1 == (param_1->Segments).ArrayNum) {
    uVar8 = iVar1 - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 0xc;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->Segments).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar2 = (this->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar7 = (param_1->Segments).AllocatorInstance.Data + lVar9;
        if (*(longlong *)(pFVar2 + lVar9) != *(longlong *)pFVar7) goto LAB_142164735;
        bVar4 = UE::operator==((FPropertyTypeName *)(pFVar2 + lVar9 + 8),
                               (FPropertyTypeName *)(pFVar7 + 8));
        if (!bVar4) goto LAB_142164735;
        lVar9 = lVar9 + -0xc;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    bVar4 = true;
  }
  else {
LAB_142164735:
    bVar4 = false;
  }
  return bVar4;
}

// operator< @ 1421648c0

bool __thiscall UE::FPropertyPathName::operator<(FPropertyPathName *this,FPropertyPathName *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  FName *this_00;
  FName *pFVar11;
  
  iVar1 = (param_1->Segments).ArrayNum;
  iVar2 = (this->Segments).ArrayNum;
  iVar4 = iVar1;
  if (iVar2 < iVar1) {
    iVar4 = iVar2;
  }
  uVar10 = 0;
  if (0 < iVar4) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (this->Segments).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_00 = (FName *)((this->Segments).AllocatorInstance.Data + uVar10 * 0xc);
      uVar7 = 0;
      if ((int)uVar9 < (param_1->Segments).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar11 = (FName *)((param_1->Segments).AllocatorInstance.Data + uVar10 * 0xc);
      iVar8 = ::FName::Compare(this_00,pFVar11);
      if (iVar8 != 0) {
LAB_142164a11:
        return SUB41((uint)iVar8 >> 0x1f,0);
      }
      bVar5 = UE::operator==((FPropertyTypeName *)(this_00 + 1),(FPropertyTypeName *)(pFVar11 + 1));
      if (!bVar5) {
        bVar5 = UE::operator<((FPropertyTypeName *)(this_00 + 1),(FPropertyTypeName *)(pFVar11 + 1))
        ;
        iVar8 = (bVar5 ^ 1) * 2 + -1;
        goto LAB_142164a11;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < iVar4);
  }
  return iVar2 < iVar1;
}

// FromJsonValue @ 142178bc0

bool __cdecl
UE::FPropertyPathName::FromJsonValue(TSharedPtr<FJsonValue,1> *param_1,FPropertyPathName *param_2)

{
  int *piVar1;
  FJsonValue *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  longlong *local_res18;
  uint local_58;
  int iStack_54;
  int local_50;
  FPropertyPathNameSegment local_48;
  TSharedPtr<FJsonValue,1> local_38;
  
  pFVar2 = param_1->Object;
  local_res18 = (longlong *)0x0;
  if (((pFVar2 == (FJsonValue *)0x0) ||
      (cVar7 = (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,&local_res18), plVar6 = local_res18,
      cVar7 == '\0')) || (local_res18 == (longlong *)0x0)) {
    return false;
  }
  puVar11 = (undefined8 *)*local_res18;
  lVar5 = local_res18[1];
  puVar12 = puVar11 + (longlong)(int)lVar5 * 2;
  while( true ) {
    if ((int)plVar6[1] != (int)lVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar11 == puVar12) {
      return true;
    }
    local_38.Object = (FJsonValue *)*puVar11;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Name.ComparisonIndex.Value = 0;
    local_48.Name.Number = 0;
    local_48.Type.Index = 0;
    local_48.Index = -1;
    bVar8 = FPropertyPathNameSegment::FromJsonValue(&local_38,&local_48);
    if (!bVar8) break;
    pFVar3 = (param_2->Segments).AllocatorInstance.Data;
    local_58 = local_48.Name.ComparisonIndex.Value;
    iStack_54 = local_48.Index + 1;
    local_50 = local_48.Type.Index;
    if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar3 + (longlong)(param_2->Segments).ArrayMax * 0xc)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    iVar10 = (param_2->Segments).ArrayNum;
    piVar1 = &(param_2->Segments).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)param_2,piVar1);
    }
    (param_2->Segments).ArrayNum = iVar10 + 1;
    pFVar3 = (param_2->Segments).AllocatorInstance.Data;
    *(ulonglong *)(pFVar3 + (longlong)iVar10 * 0xc) = CONCAT44(iStack_54,local_58);
    *(int *)(pFVar3 + (longlong)iVar10 * 0xc + 8) = local_50;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    puVar11 = puVar11 + 2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return false;
}

// GetSegment @ 14217d630

FPropertyPathNameSegment * __thiscall
UE::FPropertyPathName::GetSegment
          (FPropertyPathName *this,FPropertyPathNameSegment *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FPropertyPathNameSegment *pFVar7;
  
  uVar6 = 0;
  if (param_1 < (this->Segments).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPropertyPathNameSegment *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar2 = (this->Segments).AllocatorInstance.Data;
  uVar3 = *(ulonglong *)(pFVar2 + (longlong)param_1 * 0xc);
  __return_storage_ptr__->Name = (FName)(uVar3 & 0xffffffff);
  iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0xc + 8);
  __return_storage_ptr__->Index = (int)(uVar3 >> 0x20) + -1;
  (__return_storage_ptr__->Type).Index = iVar1;
  return __return_storage_ptr__;
}

// ToJsonValue @ 1421943f0

TSharedRef<FJsonValue,1> * __thiscall
UE::FPropertyPathName::ToJsonValue
          (FPropertyPathName *this,TSharedRef<FJsonValue,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FJsonValue,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FJsonValue,1> local_68;
  FPropertyPathNameSegment local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  TSharedRef<FJsonValue,1> local_38;
  
  iVar2 = (this->Segments).ArrayNum;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pFVar10 = (this->Segments).AllocatorInstance.Data;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->Segments).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::FPropertyPathName::FSegment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) {
      pTVar8 = ::operator_new(0x30);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        __return_storage_ptr__->Object = (FJsonValue *)0x10;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
        FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar8 + 1),&local_78);
        if ((pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedRef<FJsonValue,1> *)(*pcVar4)();
          return pTVar7;
        }
        __return_storage_ptr__->Object = (FJsonValue *)(pTVar8 + 1);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        pTVar9 = pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_78.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    uVar3 = *(ulonglong *)pFVar10;
    local_48 = (undefined4)uVar3;
    local_58.Index = (int)(uVar3 >> 0x20) + -1;
    uStack_44 = 0;
    local_58.Name = (FName)(uVar3 & 0xffffffff);
    local_58.Type.Index = *(int *)(pFVar10 + 8);
    pTVar7 = FPropertyPathNameSegment::ToJsonValue(&local_58,&local_38);
    local_68.Object = pTVar7->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_78.AllocatorInstance.Data <= &local_68) &&
        (&local_68 <
         (TSharedPtr<FJsonValue,1> *)
         (local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = local_78.ArrayNum;
    if (local_78.ArrayNum == local_78.ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_78.AllocatorInstance,&local_78.ArrayMax);
    }
    local_78.ArrayNum = iVar6 + 1;
    *(FJsonValue **)&local_78.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
         local_68.Object;
    *(TReferenceControllerBase<1> **)(local_78.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8)
         = local_68.SharedReferenceCount.ReferenceController;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_68.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar10 = pFVar10 + 0xc;
  }
  pcVar4 = (code *)swi(3);
  pTVar7 = (TSharedRef<FJsonValue,1> *)(*pcVar4)();
  return pTVar7;
}

// ToString @ 142194940

void __thiscall
UE::FPropertyPathName::ToString
          (FPropertyPathName *this,TStringBuilderBase<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  TStringBuilderBase<wchar_t> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FName local_48;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar2 = (this->Segments).ArrayNum;
  pFVar6 = (this->Segments).AllocatorInstance.Data;
  bVar4 = true;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->Segments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::FPropertyPathName::FSegment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (param_1,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    }
    uVar3 = *(ulonglong *)pFVar6;
    local_38 = (undefined4)uVar3;
    local_3c = (int)(uVar3 >> 0x20) + -1;
    uStack_34 = 0;
    local_48 = (FName)(uVar3 & 0xffffffff);
    local_40 = *(uint *)(pFVar6 + 8);
    ::FName::AppendString(&local_48,param_1);
    if (local_3c != -1) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L'[';
      param_1->CurPos = param_1->CurPos + 1;
      pTVar5 = TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%d");
      if (pTVar5->End < pTVar5->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar5,1);
      }
      *pTVar5->CurPos = L']';
      pTVar5->CurPos = pTVar5->CurPos + 1;
    }
    if (local_40 != 0) {
      pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L" (",2);
      AppendNode(pTVar5,(FPropertyTypeNameNode *)
                        ((longlong)GPropertyTypeNameTable.Blocks[(longlong)(int)local_40 >> 0xd] +
                        (ulonglong)(local_40 & 0x1fff) * 0xc));
      if (pTVar5->End < pTVar5->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar5,1);
      }
      *pTVar5->CurPos = L')';
      pTVar5->CurPos = pTVar5->CurPos + 1;
    }
    pFVar6 = pFVar6 + 0xc;
  }
  return;
}

// SetIndex @ 1422e3d00

void __thiscall UE::FPropertyPathName::SetIndex(FPropertyPathName *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->Segments).ArrayNum;
  if (iVar1 != 0) {
    uVar4 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar4 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(int *)((this->Segments).AllocatorInstance.Data +
            (longlong)(this->Segments).ArrayNum * 0xc + -8) = param_1 + 1;
  }
  return;
}

