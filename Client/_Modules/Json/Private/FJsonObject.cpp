// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 47

// Duplicate @ 141dd3370

void __cdecl
FJsonObject::Duplicate(TSharedPtr<FJsonObject_const_,1> *param_1,TSharedPtr<FJsonObject,1> *param_2)

{
  FString *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  FJsonObject *pFVar6;
  FJsonObject *pFVar7;
  code *pcVar8;
  bool bVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  TSharedPtr<FJsonValue,1> local_a8;
  FJsonObject *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FJsonObject *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar6 = param_1->Object;
  if ((pFVar6 != (FJsonObject *)0x0) && (param_2->Object != (FJsonObject *)0x0)) {
    iVar4 = *(int *)&(pFVar6->Values).field_0x28;
    iStack_90 = 0;
    local_78 = 0;
    uStack_8c = 1;
    puVar3 = &(pFVar6->Values).field_0x10;
    iStack_7c = 0;
    if (iVar4 != 0) {
      puVar16 = *(uint **)&(pFVar6->Values).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar3;
      }
      uVar14 = *puVar16;
      while (uVar14 == 0) {
        lVar11 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141dd342d;
        uVar14 = puVar16[lVar11 + 1];
      }
      uStack_8c = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_8c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iStack_7c = (int)lVar11 + -1 + local_78;
      if (iVar4 < iStack_7c) {
        iStack_7c = iVar4;
      }
    }
LAB_141dd342d:
    uVar14 = *(uint *)&(pFVar6->Values).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    iStack_70 = *(int *)&(pFVar6->Values).field_0x8 - *(int *)&(pFVar6->Values).field_0x34;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = pFVar6;
    local_88 = puVar3;
    iStack_74 = iStack_7c;
    local_68 = pFVar6;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar5 = *(uint *)&(pFVar6->Values).field_0x28;
    if (uVar14 != uVar5) {
      puVar15 = *(undefined1 **)&(pFVar6->Values).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar3;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_141dd3540;
        uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar14 = (int)lVar11 + -1 + uVar13;
      if ((int)uVar5 < (int)uVar14) {
        uVar14 = uVar5;
      }
    }
LAB_141dd3540:
    while( true ) {
      pFVar7 = local_68;
      if (*(int *)&(local_68->Values).field_0x8 - *(int *)&(local_68->Values).field_0x34 !=
          (int)uStack_40) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar14) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pFVar7 == pFVar6)
         ) break;
      pFVar1 = (FString *)
               (*(longlong *)&pFVar7->Values + (longlong)TStack_60.CurrentBitIndex * 0x28);
      if ((param_2->Object == (FJsonObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = param_2->Object;
      pTVar10 = FJsonValue::Duplicate(&local_a8,(TSharedPtr<FJsonValue,1> *)(pFVar1 + 1));
      SetField(pFVar7,pFVar1,pTVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// Duplicate @ 141dd3620

void __cdecl
FJsonObject::Duplicate(TSharedPtr<FJsonObject,1> *param_1,TSharedPtr<FJsonObject,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FJsonObject_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  Duplicate(&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// GetAllocatedSize @ 141dd4e60

ulong64 __thiscall FJsonObject::GetAllocatedSize(FJsonObject *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar7 = *(uint *)&(this->Values).field_0x48;
  if (uVar7 < 2) {
    lVar13 = 0;
  }
  else {
    lVar13 = (longlong)(int)uVar7 << 2;
  }
  puVar1 = &(this->Values).field_0x10;
  iVar3 = *(int *)&(this->Values).field_0x28;
  iVar14 = 0;
  uVar7 = 1;
  iVar12 = 0;
  uVar9 = lVar13 + (ulonglong)((*(int *)&(this->Values).field_0x2c + 0x1fU >> 5) << 2) +
          (longlong)*(int *)&(this->Values).field_0xc * 0x28;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Values).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar13 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar12) goto LAB_141dd4f2d;
      uVar11 = puVar15[lVar13 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iVar8 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_141dd4f2d:
  uVar11 = *(uint *)&(this->Values).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Values).field_0x8 - *(int *)&(this->Values).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return uVar9;
  }
  uVar7 = *(uint *)&(this->Values).field_0x28;
  if (uVar11 != uVar7) {
    puVar10 = *(undefined1 **)&(this->Values).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar13 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar12) goto LAB_141dd5030;
      uVar11 = *(uint *)(puVar10 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar11 = (int)lVar13 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_141dd5030:
  while( true ) {
    if (*(int *)&(this->Values).field_0x8 - *(int *)&(this->Values).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar3 = *(int *)(*(longlong *)&this->Values + 0xc + (longlong)TStack_60.CurrentBitIndex * 0x28);
    plVar4 = *(longlong **)
              (*(longlong *)&this->Values + (longlong)TStack_60.CurrentBitIndex * 0x28 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*plVar4 + 0x98))();
    }
    uVar9 = uVar9 + (longlong)iVar3 * 2 + lVar13;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar9;
}

// GetArrayField @ 141dd51b0

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
FJsonObject::GetArrayField(FJsonObject *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FJsonValue,1> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GetField(this,&local_28,&local_18,Array);
  if (local_28.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FJsonValue::AsArray(local_28.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return pTVar3;
}

// GetBoolField @ 141dd53b0

bool __thiscall FJsonObject::GetBoolField(FJsonObject *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 local_res10 [24];
  TSharedPtr<FJsonValue,1> local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GetField(this,&local_38,&local_18,None);
  if (local_38.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res10[0] = 0;
  cVar4 = (**(code **)((local_38.Object)->_padding_ + 0x68))(local_38.Object,local_res10);
  if (cVar4 == '\0') {
    ::FString::FString(&local_28,L"Boolean");
    FJsonValue::ErrorMessage(local_38.Object,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return (bool)local_res10[0];
}

// GetField @ 141dd5cf0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonValue,1> * __thiscall
FJsonObject::GetField
          (FJsonObject *this,TSharedPtr<FJsonValue,1> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,EJson param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  FJsonValue *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FStaticBasicLogRecord *pFVar7;
  
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,param_1);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar4->Object == (FJsonValue *)0x0)) {
    if (2 < (byte)LogJson._0_1_) {
      pFVar7 = &`public:_class_TSharedPtr<FJsonValue,1>___cdecl_FJsonObject::GetField(TStringView<wchar_t>,EJson)const___ptr64'
                ::__l31::LOG_Static;
LAB_141dd5d95:
      UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogJson);
    }
LAB_141dd5da8:
    pTVar6 = ::operator_new(0x20);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Object = (FJsonValue *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueNull___00_SharedPointerInternals__6B_;
      pTVar6[1]._padding_ = (longlong)&___7FJsonValueNull__6B_;
      pTVar6[1].SharedReferenceCount = (atomic<int>)0x1;
      if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
          return pTVar4;
        }
      }
      __return_storage_ptr__->Object = (FJsonValue *)(pTVar6 + 1);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    if (param_2 != None) {
      pFVar5 = TSharedPtr<FJsonValue,1>::operator->(pTVar4);
      if (pFVar5->Type != param_2) {
        if (2 < (byte)LogJson._0_1_) {
          pFVar7 = &`public:_class_TSharedPtr<FJsonValue,1>___cdecl_FJsonObject::GetField(TStringView<wchar_t>,EJson)const___ptr64'
                    ::__l11::LOG_Static;
          goto LAB_141dd5d95;
        }
        goto LAB_141dd5da8;
      }
    }
    __return_storage_ptr__->Object = pTVar4->Object;
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// GetNumberField @ 141dd68d0

double __thiscall FJsonObject::GetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  double local_res10 [3];
  TSharedPtr<FJsonValue,1> local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GetField(this,&local_38,&local_18,None);
  if (local_38.Object == (FJsonValue *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  local_res10[0] = 0.0;
  cVar4 = (**(code **)((local_38.Object)->_padding_ + 0x50))(local_38.Object,local_res10);
  if (cVar4 == '\0') {
    ::FString::FString(&local_28,L"Number");
    FJsonValue::ErrorMessage(local_38.Object,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return local_res10[0];
}

// GetObjectField @ 141dd6a40

TSharedPtr<FJsonObject,1> * __thiscall
FJsonObject::GetObjectField(FJsonObject *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FJsonObject,1> *pTVar3;
  TSharedPtr<FJsonValue,1> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GetField(this,&local_28,&local_18,Object);
  if (local_28.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FJsonObject,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TSharedPtr<FJsonObject,1> *)(**(code **)(local_28.Object)->_padding_)(local_28.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return pTVar3;
}

// GetStringField @ 141dd6e20

FString * __thiscall
FJsonObject::GetStringField
          (FJsonObject *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FString *pFVar4;
  TSharedPtr<FJsonValue,1> local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GetField(this,&local_38,&local_18,None);
  if (local_38.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  cVar3 = (**(code **)((local_38.Object)->_padding_ + 0x58))(local_38.Object,__return_storage_ptr__)
  ;
  if (cVar3 == '\0') {
    ::FString::FString(&local_28,L"String");
    FJsonValue::ErrorMessage(local_38.Object,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetUtf8StringField @ 141dd7630

FUtf8String * __thiscall
FJsonObject::GetUtf8StringField
          (FJsonObject *this,FUtf8String *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FUtf8String *pFVar4;
  TSharedPtr<FJsonValue,1> local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GetField(this,&local_38,&local_18,None);
  if (local_38.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUtf8String *)(*pcVar1)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  cVar3 = (**(code **)((local_38.Object)->_padding_ + 0x60))(local_38.Object,__return_storage_ptr__)
  ;
  if (cVar3 == '\0') {
    ::FString::FString(&local_28,L"Utf8String");
    FJsonValue::ErrorMessage(local_38.Object,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RemoveField @ 141ddef60

void __thiscall FJsonObject::RemoveField(FJsonObject *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  if (*(int *)&(this->Values).field_0x8 != *(int *)&(this->Values).field_0x34) {
    TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TStringView<wchar_t>_>
              ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                *)this,uVar1,param_1);
  }
  return;
}

// SetArrayField @ 141dea280

void __thiscall
FJsonObject::SetArrayField
          (FJsonObject *this,FString *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TSharedRef<FJsonValueArray,1> *pTVar1;
  FJsonValueArray *local_38;
  TReferenceControllerBase<1> *local_30;
  FString *local_28;
  undefined8 *local_20;
  TSharedRef<FJsonValueArray,1> local_18;
  
  pTVar1 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>
                     (&local_18,param_2);
  local_38 = pTVar1->Object;
  local_30 = (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = &local_38;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetArrayField @ 141dea310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FJsonObject::SetArrayField
          (FJsonObject *this,FString *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TSharedPtr<FJsonValue,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  ForAnyElementType local_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FString *local_28;
  TReferenceControllerBase<1> **local_20;
  
  iVar1 = param_2->ArrayNum;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = (TSharedPtr<FJsonValue,1> *)(param_2->AllocatorInstance).Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  if (iVar1 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
    ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
              (local_48.Data,pTVar2,iVar1);
  }
  pTStack_30 = ::operator_new(0x30);
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_30->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
    pTStack_30[1]._padding_ = (longlong)&___7FJsonValueArray__6B_;
    pTStack_30[2]._padding_ = (longlong)local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    pTStack_30[2].SharedReferenceCount = local_40._0_4_;
    pTStack_30[2].WeakReferenceCount = local_40._4_4_;
    local_40 = 0;
    pTStack_30[1].SharedReferenceCount = (atomic<int>)0x5;
    if (pTStack_30 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTStack_30;
    local_38 = pTStack_30 + 1;
  }
  local_20 = &local_38;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48.Data,(int)local_40._0_4_);
  if ((TSharedPtr<FJsonValue,1> *)local_48.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetArrayField @ 141dea4a0

void __thiscall
FJsonObject::SetArrayField
          (FJsonObject *this,FString *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  TSharedRef<FJsonValueArray,1> *pTVar1;
  longlong lVar2;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FJsonValueArray *local_38;
  TReferenceControllerBase<1> *local_30;
  ForAnyElementType *local_28;
  FJsonValueArray **local_20;
  TSharedRef<FJsonValueArray,1> local_18;
  
  local_40 = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_40;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar2 * 2);
  }
  pTVar1 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>
                     (&local_18,param_2);
  local_38 = pTVar1->Object;
  local_30 = (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = &local_48;
  local_20 = &local_38;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetArrayField @ 141dea5b0

void __thiscall
FJsonObject::SetArrayField
          (FJsonObject *this,FString *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TSharedPtr<FJsonValue,1> *pTVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  iVar1 = param_2->ArrayNum;
  pTVar2 = (TSharedPtr<FJsonValue,1> *)(param_2->AllocatorInstance).Data;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_28.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_28.AllocatorInstance,iVar1,&local_28.ArrayMax);
    ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
              (local_28.AllocatorInstance.Data,pTVar2,iVar1);
  }
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar3 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  SetArrayField(this,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_28.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// SetBoolField @ 141dea7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FJsonObject::SetBoolField(FJsonObject *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FString *local_28;
  TReferenceControllerBase<1> **local_20;
  
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueBoolean___00_SharedPointerInternals__6B_;
    *(bool *)&pTVar3[2]._padding_ = param_2;
    pTVar3[1]._padding_ = (longlong)&___7FJsonValueBoolean__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x4;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = pTVar3 + 1;
    pTStack_30 = pTVar3;
  }
  local_20 = &local_38;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetBoolField @ 141dea8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FJsonObject::SetBoolField(FJsonObject *this,FString *param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> local_res18;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  ForAnyElementType *local_28;
  TReferenceControllerBase<1> **local_20;
  
  local_40 = (param_1->Data).ArrayNum;
  lVar3 = (longlong)local_40;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar3 * 2);
  }
  pTStack_30 = ::operator_new(0x28);
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    *(bool *)&pTStack_30[2]._padding_ = param_2;
    pTStack_30->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueBoolean___00_SharedPointerInternals__6B_;
    pTStack_30[1]._padding_ = (longlong)&___7FJsonValueBoolean__6B_;
    pTStack_30[1].SharedReferenceCount = (atomic<int>)0x4;
    if (pTStack_30 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = pTStack_30;
    local_38 = pTStack_30 + 1;
  }
  local_28 = &local_48;
  local_20 = &local_38;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,&local_res18,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetField @ 141deac70

void __thiscall
FJsonObject::SetField(FJsonObject *this,FString *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&> local_res8 [2];
  FString *local_18;
  TSharedPtr<FJsonValue,1> *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

// SetField @ 141deaca0

void __thiscall
FJsonObject::SetField(FJsonObject *this,FString *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  ForAnyElementType *local_18;
  TSharedPtr<FJsonValue,1> *local_10;
  
  local_20 = (param_1->Data).ArrayNum;
  lVar1 = (longlong)local_20;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar1 * 2);
  }
  local_18 = &local_28;
  local_10 = param_2;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&> *)
                     &stack0x00000008,(bool *)&local_18);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetNumberField @ 141deae40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FJsonObject::SetNumberField(FJsonObject *this,FString *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FString *local_38;
  TReferenceControllerBase<1> **local_30;
  
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_48 = ___xmm_00000000000000000000000000000010;
    pTStack_40 = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FJsonValueNumber__6B_;
    pTVar3[2]._padding_ = (longlong)param_2;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_48 = pTVar3 + 1;
    pTStack_40 = pTVar3;
  }
  local_30 = &local_48;
  local_38 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetNumberField @ 141deaf50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FJsonObject::SetNumberField(FJsonObject *this,FString *param_1,double param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  ForAnyElementType *local_28;
  TReferenceControllerBase<1> **local_20;
  
  local_40 = (param_1->Data).ArrayNum;
  lVar3 = (longlong)local_40;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar3 * 2);
  }
  pTStack_30 = ::operator_new(0x28);
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_30->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    pTStack_30[1]._padding_ = (longlong)&___7FJsonValueNumber__6B_;
    pTStack_30[2]._padding_ = (longlong)param_2;
    pTStack_30[1].SharedReferenceCount = (atomic<int>)0x3;
    if (pTStack_30 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = pTStack_30;
    local_38 = pTStack_30 + 1;
  }
  local_28 = &local_48;
  local_20 = &local_38;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetObjectField @ 141deb0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FJsonObject::SetObjectField(FJsonObject *this,FString *param_1,TSharedPtr<FJsonObject,1> *param_2)

{
  FJsonObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FJsonValueNull,1> *pTVar6;
  TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> local_res18;
  TReferenceControllerBase<1> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FJsonValueNull *local_68;
  TReferenceControllerBase<1> *local_60;
  FString *local_58;
  TReferenceControllerBase<1> **local_50;
  FString *local_48;
  FJsonValueNull **local_40;
  TSharedRef<FJsonValueNull,1> local_38;
  
  pFVar1 = param_2->Object;
  if (pFVar1 == (FJsonObject *)0x0) {
    pTVar6 = MakeShared<FJsonValueNull,1>(&local_38);
    local_68 = pTVar6->Object;
    local_60 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40 = &local_68;
    local_48 = param_1;
    TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
              ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                       &local_res18.Value,(bool *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    return;
  }
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_78 = ___xmm_00000000000000000000000000000010;
    pTStack_70 = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5[2]._padding_ = (longlong)pFVar1;
    pTVar5[1]._padding_ = (longlong)&___7FJsonValueObject__6B_;
    *(TReferenceControllerBase<1> **)&pTVar5[2].SharedReferenceCount = pTVar2;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_78 = pTVar5 + 1;
    if (local_78 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_70 = pTVar5;
  }
  local_50 = &local_78;
  local_58 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,&local_res18,(bool *)&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetObjectField @ 141deb290

void __thiscall
FJsonObject::SetObjectField(FJsonObject *this,FString *param_1,TSharedPtr<FJsonObject,1> *param_2)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar1 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  SetObjectField(this,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetStringField @ 141deb340

void __thiscall FJsonObject::SetStringField(FJsonObject *this,FString *param_1,FUtf8String *param_2)

{
  TSharedRef<TJsonValueString<char8_t>,1> *pTVar1;
  TJsonValueString<char8_t> *local_38;
  TReferenceControllerBase<1> *local_30;
  FString *local_28;
  undefined8 *local_20;
  TSharedRef<TJsonValueString<char8_t>,1> local_18;
  
  pTVar1 = MakeShared<TJsonValueString<char8_t>,1,FUtf8String>(&local_18,param_2);
  local_38 = pTVar1->Object;
  local_30 = (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = &local_38;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetStringField @ 141deb3d0

void __thiscall FJsonObject::SetStringField(FJsonObject *this,FString *param_1,FString *param_2)

{
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar1;
  TJsonValueString<wchar_t> *local_38;
  TReferenceControllerBase<1> *local_30;
  FString *local_28;
  undefined8 *local_20;
  TSharedRef<TJsonValueString<wchar_t>,1> local_18;
  
  pTVar1 = MakeShared<TJsonValueString<wchar_t>,1,FString>(&local_18,param_2);
  local_38 = pTVar1->Object;
  local_30 = (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = &local_38;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetStringField @ 141deb460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FJsonObject::SetStringField(FJsonObject *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForAnyElementType local_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FString *local_28;
  TReferenceControllerBase<1> **local_20;
  
  iVar1 = (param_2->Data).ArrayNum;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  if (iVar1 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,_Src,(longlong)iVar1 * 2);
  }
  pTStack_30 = ::operator_new(0x30);
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_30->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TJsonValueString__W___00_SharedPointerInternals__6B_
    ;
    pTStack_30[1]._padding_ = (longlong)&___7__TJsonValueString__W__6B_;
    pTStack_30[2]._padding_ = (longlong)local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    pTStack_30[2].SharedReferenceCount = local_40._0_4_;
    pTStack_30[2].WeakReferenceCount = local_40._4_4_;
    local_40 = 0;
    pTStack_30[1].SharedReferenceCount = (atomic<int>)0x2;
    if (pTStack_30 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = pTStack_30;
    local_38 = pTStack_30 + 1;
  }
  local_20 = &local_38;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetStringField @ 141deb5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FJsonObject::SetStringField(FJsonObject *this,FString *param_1,FUtf8String *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForAnyElementType local_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FString *local_28;
  TReferenceControllerBase<1> **local_20;
  
  iVar1 = (param_2->Data).ArrayNum;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  if (iVar1 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,_Src,(longlong)iVar1);
  }
  pTStack_30 = ::operator_new(0x30);
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_30->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TJsonValueString__Q___00_SharedPointerInternals__6B_
    ;
    pTStack_30[1]._padding_ = (longlong)&___7__TJsonValueString__Q__6B_;
    pTStack_30[2]._padding_ = (longlong)local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    pTStack_30[2].SharedReferenceCount = local_40._0_4_;
    pTStack_30[2].WeakReferenceCount = local_40._4_4_;
    local_40 = 0;
    pTStack_30[1].SharedReferenceCount = (atomic<int>)0x2;
    if (pTStack_30 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = pTStack_30;
    local_38 = pTStack_30 + 1;
  }
  local_20 = &local_38;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetStringField @ 141deb780

void __thiscall FJsonObject::SetStringField(FJsonObject *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar1;
  longlong lVar2;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TJsonValueString<wchar_t> *local_38;
  TReferenceControllerBase<1> *local_30;
  ForAnyElementType *local_28;
  TJsonValueString<wchar_t> **local_20;
  TSharedRef<TJsonValueString<wchar_t>,1> local_18;
  
  local_40 = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_40;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar2 * 2);
  }
  pTVar1 = MakeShared<TJsonValueString<wchar_t>,1,FString>(&local_18,param_2);
  local_38 = pTVar1->Object;
  local_30 = (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = &local_48;
  local_20 = &local_38;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetStringField @ 141deb890

void __thiscall FJsonObject::SetStringField(FJsonObject *this,FString *param_1,FUtf8String *param_2)

{
  FScriptContainerElement *_Src;
  TSharedRef<TJsonValueString<char8_t>,1> *pTVar1;
  longlong lVar2;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TJsonValueString<char8_t> *local_38;
  TReferenceControllerBase<1> *local_30;
  ForAnyElementType *local_28;
  TJsonValueString<char8_t> **local_20;
  TSharedRef<TJsonValueString<char8_t>,1> local_18;
  
  local_40 = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_40;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar2 * 2);
  }
  pTVar1 = MakeShared<TJsonValueString<char8_t>,1,FUtf8String>(&local_18,param_2);
  local_38 = pTVar1->Object;
  local_30 = (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = &local_48;
  local_20 = &local_38;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)&stack0x00000008,
             (bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// SetStringField @ 141deb9a0

void __thiscall FJsonObject::SetStringField(FJsonObject *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,pFVar1,lVar2 * 2);
  }
  local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_28.Data.ArrayNum;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar1,lVar2 * 2);
  }
  SetStringField(this,&local_28,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetStringField @ 141debac0

void __thiscall FJsonObject::SetStringField(FJsonObject *this,FString *param_1,FUtf8String *param_2)

{
  FScriptContainerElement *pFVar1;
  size_t _Size;
  longlong lVar2;
  FString local_28;
  FUtf8String local_18;
  
  local_18.Data.ArrayNum = (param_2->Data).ArrayNum;
  _Size = (size_t)local_18.Data.ArrayNum;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,pFVar1,_Size);
  }
  local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_28.Data.ArrayNum;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar1,lVar2 * 2);
  }
  SetStringField(this,&local_28,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// TryGetArrayField @ 141df9980

bool __thiscall
FJsonObject::TryGetArrayField
          (FJsonObject *this,TStringView<wchar_t> *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141df9a0e;
    }
  }
  bVar5 = false;
LAB_141df9a0e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetBoolField @ 141df9b30

bool __thiscall
FJsonObject::TryGetBoolField(FJsonObject *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141df9bbe;
    }
  }
  bVar5 = false;
LAB_141df9bbe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetField @ 141df9be0

TSharedPtr<FJsonValue,1> * __thiscall
FJsonObject::TryGetField
          (FJsonObject *this,TSharedPtr<FJsonValue,1> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  FJsonValue *pFVar1;
  uint uVar2;
  TSharedPtr<FJsonValue,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pTVar3 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar2,param_1);
  if ((pTVar3 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar3->Object, pFVar1 == (FJsonValue *)0x0)) {
    __return_storage_ptr__->Object = (FJsonValue *)0x0;
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// TryGetNumberField @ 141dfb840

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,schar *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfb8ce;
    }
  }
  bVar5 = false;
LAB_141dfb8ce:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfb8f0

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,uchar *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfb97e;
    }
  }
  bVar5 = false;
LAB_141dfb97e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfb9a0

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,short *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfba2e;
    }
  }
  bVar5 = false;
LAB_141dfba2e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfba50

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,ushort *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfbade;
    }
  }
  bVar5 = false;
LAB_141dfbade:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfbb00

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,int *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfbb8e;
    }
  }
  bVar5 = false;
LAB_141dfbb8e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfbbb0

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,uint *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfbc3e;
    }
  }
  bVar5 = false;
LAB_141dfbc3e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfbc60

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,float *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfbcee;
    }
  }
  bVar5 = false;
LAB_141dfbcee:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfbd10

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,double *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfbd9e;
    }
  }
  bVar5 = false;
LAB_141dfbd9e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfbdc0

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,long64 *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfbe4e;
    }
  }
  bVar5 = false;
LAB_141dfbe4e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetNumberField @ 141dfbe70

bool __thiscall
FJsonObject::TryGetNumberField(FJsonObject *this,TStringView<wchar_t> *param_1,ulong64 *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfbefe;
    }
  }
  bVar5 = false;
LAB_141dfbefe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetObjectField @ 141dfbf60

bool __thiscall
FJsonObject::TryGetObjectField
          (FJsonObject *this,TStringView<wchar_t> *param_1,TSharedPtr<FJsonObject,1> **param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfbff1;
    }
  }
  bVar5 = false;
LAB_141dfbff1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// TryGetStringArrayField @ 141dfc2d0

bool __thiscall
FJsonObject::TryGetStringArrayField
          (FJsonObject *this,TStringView<wchar_t> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FJsonValue *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  void *_Src;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  TReferenceControllerBase<1> *pTVar14;
  ulonglong uVar15;
  longlong *local_res8;
  void *local_68;
  undefined8 local_60;
  TStringView<wchar_t> local_58;
  FJsonValue *local_48;
  TReferenceControllerBase<1> *local_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar12 = 0;
  local_38 = local_58.DataPtr;
  uStack_30 = local_58._8_8_;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(local_58.Size,local_58.DataPtr);
  pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar7,&local_58);
  if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar9->Object, pFVar1 == (FJsonValue *)0x0)) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar14 = (pTVar9->SharedReferenceCount).ReferenceController;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    local_48 = pFVar1;
    local_40 = pTVar14;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    cVar4 = (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,&local_res8);
    if (cVar4 != '\0') {
      uVar15 = uVar12;
      if (0 < (int)local_res8[1]) {
        do {
          plVar2 = local_res8;
          uVar11 = (uint)uVar12;
          local_68 = (void *)0x0;
          local_60 = 0;
          uVar7 = 0;
          if ((int)uVar11 < (int)local_res8[1]) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          lVar13 = *plVar2;
          if ((*(longlong *)(lVar13 + uVar15) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          plVar2 = *(longlong **)(lVar13 + uVar15);
          cVar4 = (**(code **)(*plVar2 + 0x58))(plVar2,&local_68);
          if (cVar4 == '\0') {
            if (local_68 != (void *)0x0) {
              FMemory::Free(local_68);
            }
            goto LAB_141dfc572;
          }
          pFVar10 = (param_2->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < pFVar10 + (longlong)param_2->ArrayMax * 0x10))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == param_2->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          _Src = local_68;
          pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          param_2->ArrayNum = iVar8 + 1;
          *(FScriptContainerElement **)&pFVar10->field_0x0 = (FScriptContainerElement *)0x0;
          lVar13 = (longlong)(int)local_60;
          *(int *)&pFVar10[8].field_0x0 = (int)local_60;
          if ((int)local_60 == 0) {
            *(int *)(pFVar10 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,(int)local_60,0,(ForAnyElementType *)pFVar10,(int)local_60,
                       (int *)(pFVar10 + 0xc));
            memcpy(*(FScriptContainerElement **)&pFVar10->field_0x0,_Src,lVar13 * 2);
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar15 = uVar15 + 0x10;
        } while ((int)(uVar11 + 1) < (int)local_res8[1]);
      }
      bVar5 = true;
      goto LAB_141dfc574;
    }
  }
LAB_141dfc572:
  bVar5 = false;
LAB_141dfc574:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return bVar5;
}

// TryGetStringField @ 141dfc5b0

bool __thiscall
FJsonObject::TryGetStringField(FJsonObject *this,TStringView<wchar_t> *param_1,FString *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_18);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar1 = pTVar4->Object, pFVar1 == (FJsonValue *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1,param_2);
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_141dfc63e;
    }
  }
  bVar5 = false;
LAB_141dfc63e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

