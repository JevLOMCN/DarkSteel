// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 32

// FJsonValue @ 141dc4c30

FJsonValue * __thiscall FJsonValue::FJsonValue(FJsonValue *this)

{
  this->Type = None;
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  return this;
}

// ~FJsonValue @ 141dc64b0

void __thiscall FJsonValue::~FJsonValue(FJsonValue *this)

{
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  return;
}

// AsArray @ 141dcd820

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
FJsonValue::AsArray(FJsonValue *this)

{
  char cVar1;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_res8 [4];
  FString local_18;
  
  local_res8[0] = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0;
  cVar1 = (**(code **)(this->_padding_ + 0x78))(this,local_res8);
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FJsonValue::AsArray'::__l5::_dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_res8[0] = &::EmptyArray;
    ::FString::FString(&local_18,L"Array");
    ErrorMessage(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return local_res8[0];
}

// AsBool @ 141dcd8e0

bool __thiscall FJsonValue::AsBool(FJsonValue *this)

{
  char cVar1;
  undefined1 local_res8 [32];
  FString local_18;
  
  local_res8[0] = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x68))(this,local_res8);
  if (cVar1 == '\0') {
    ::FString::FString(&local_18,L"Boolean");
    ErrorMessage(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (bool)local_res8[0];
}

// AsNumber @ 141dcd940

double __thiscall FJsonValue::AsNumber(FJsonValue *this)

{
  char cVar1;
  double local_res8 [4];
  FString local_18;
  
  local_res8[0] = 0.0;
  cVar1 = (**(code **)(this->_padding_ + 0x50))(0,local_res8);
  if (cVar1 == '\0') {
    ::FString::FString(&local_18,L"Number");
    ErrorMessage(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return local_res8[0];
}

// AsObject @ 141dcd9a0

TSharedPtr<FJsonObject,1> * __thiscall FJsonValue::AsObject(FJsonValue *this)

{
  char cVar1;
  TSharedRef<FJsonObject,1> *pTVar2;
  TSharedPtr<FJsonObject,1> *local_res8 [4];
  TSharedRef<FJsonObject,1> local_18;
  
  local_res8[0] = (TSharedPtr<FJsonObject,1> *)0x0;
  cVar1 = (**(code **)(this->_padding_ + 0x88))(this,local_res8);
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pTVar2 = MakeShared<FJsonObject,1>(&local_18);
        EmptyObject.Object = pTVar2->Object;
        EmptyObject.SharedReferenceCount.ReferenceController =
             (pTVar2->SharedReferenceCount).ReferenceController;
        if (EmptyObject.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (EmptyObject.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(EmptyObject.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
               1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        atexit(`FJsonValue::AsObject'::__l5::_dynamic_atexit_destructor_for__EmptyObject__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_res8[0] = &EmptyObject;
    ::FString::FString((FString *)&local_18,L"Object");
    ErrorMessage(this,(FString *)&local_18);
    if (local_18.Object != (FJsonObject *)0x0) {
      FMemory::Free(local_18.Object);
    }
  }
  return local_res8[0];
}

// AsString @ 141dcdaa0

FString * __thiscall FJsonValue::AsString(FJsonValue *this,FString *__return_storage_ptr__)

{
  char cVar1;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x58))();
  if (cVar1 == '\0') {
    ::FString::FString(&local_18,L"String");
    ErrorMessage(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// AsUtf8String @ 141dcdb10

FUtf8String * __thiscall
FJsonValue::AsUtf8String(FJsonValue *this,FUtf8String *__return_storage_ptr__)

{
  char cVar1;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x60))();
  if (cVar1 == '\0') {
    ::FString::FString(&local_18,L"Utf8String");
    ErrorMessage(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// CompareEqual @ 141dceb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl FJsonValue::CompareEqual(FJsonValue *param_1,FJsonValue *param_2)

{
  undefined1 *puVar1;
  FString *pFVar2;
  EJson EVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FJsonValue *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar16;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar17;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar18;
  TSharedPtr<FJsonObject,1> *this;
  TSharedPtr<FJsonObject,1> *this_00;
  FJsonObject *pFVar19;
  TTuple<FString,TSharedPtr<FJsonValue,1>_> *pTVar20;
  longlong lVar21;
  undefined8 *puVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  uint *puVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  longlong local_140;
  undefined1 local_138 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_130;
  wchar_t *local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  FJsonObject *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  int local_d4;
  FJsonObject *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FString local_a0;
  FString local_90;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> local_80;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_168;
  EVar3 = param_1->Type;
  if (EVar3 == param_2->Type) {
    switch(EVar3) {
    case None:
    case Null:
      return true;
    case String:
      local_118 = (wchar_t *)0x0;
      local_110 = 0;
      cVar14 = (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_118);
      if (cVar14 == '\0') {
        ::FString::FString(&local_a0,L"String");
        ErrorMessage(param_2,&local_a0);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      local_128 = (wchar_t *)0x0;
      local_120 = 0;
      cVar14 = (**(code **)(param_1->_padding_ + 0x58))(param_1,&local_128);
      if (cVar14 == '\0') {
        ::FString::FString(&local_90,L"String");
        ErrorMessage(param_1,&local_90);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      if ((int)local_120 == (int)local_110) {
        if ((int)local_120 < 2) {
          bVar11 = true;
        }
        else {
          iVar23 = FGenericPlatformStricmp::Stricmp(local_128,local_118);
          bVar11 = iVar23 == 0;
        }
      }
      else {
        bVar11 = (int)local_120 + (int)local_110 == 1;
      }
      if (local_128 != (wchar_t *)0x0) {
        FMemory::Free(local_128);
      }
      if (local_118 != (wchar_t *)0x0) {
        FMemory::Free(local_118);
        return bVar11;
      }
      return bVar11;
    case Number:
      dVar8 = AsNumber(param_1);
      dVar9 = AsNumber(param_2);
      if (dVar8 == dVar9) {
        return true;
      }
      return false;
    case Boolean:
      bVar11 = AsBool(param_1);
      bVar12 = AsBool(param_2);
      return bVar12 == bVar11;
    case Array:
      pTVar18 = AsArray(param_1);
      local_130 = AsArray(param_2);
      if (pTVar18->ArrayNum == local_130->ArrayNum) {
        uVar24 = 0;
        uVar26 = uVar24;
        uVar31 = uVar24;
        if (pTVar18->ArrayNum < 1) {
          return true;
        }
        while( true ) {
          pTVar10 = local_130;
          uVar27 = (uint)uVar24;
          uVar15 = 0;
          if ((int)uVar27 < local_130->ArrayNum) {
            uVar15 = ~uVar27 >> 0x1f;
          }
          if (uVar15 == 0) {
            local_148 = (ulonglong)(int)uVar27;
            local_140 = (longlong)local_130->ArrayNum;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
          }
          pFVar5 = (pTVar10->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar5 + uVar26) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          pFVar6 = *(FJsonValue **)(pFVar5 + uVar26);
          uVar15 = 0;
          if ((int)uVar27 < pTVar18->ArrayNum) {
            uVar15 = ~uVar27 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (local_148 = uVar31, local_140 = (longlong)pTVar18->ArrayNum,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          pFVar5 = (pTVar18->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar5 + uVar26) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          bVar11 = CompareEqual(*(FJsonValue **)(pFVar5 + uVar26),pFVar6);
          if (!bVar11) break;
          uVar24 = (ulonglong)(uVar27 + 1);
          uVar26 = uVar26 + 0x10;
          uVar31 = uVar31 + 1;
          if (pTVar18->ArrayNum <= (int)(uVar27 + 1)) {
            return true;
          }
        }
      }
      break;
    case Object:
      this = (TSharedPtr<FJsonObject,1> *)(**(code **)param_1->_padding_)();
      this_00 = (TSharedPtr<FJsonObject,1> *)(**(code **)param_2->_padding_)(param_2);
      if ((this->Object != (FJsonObject *)0x0) == (this_00->Object != (FJsonObject *)0x0)) {
        if (this->Object == (FJsonObject *)0x0) {
          return true;
        }
        pFVar19 = TSharedPtr<FJsonObject,1>::operator->(this);
        iVar23 = *(int *)&(pFVar19->Values).field_0x8;
        iVar4 = *(int *)&(pFVar19->Values).field_0x34;
        pFVar19 = TSharedPtr<FJsonObject,1>::operator->(this_00);
        if (iVar23 - iVar4 ==
            *(int *)&(pFVar19->Values).field_0x8 - *(int *)&(pFVar19->Values).field_0x34) {
          pFVar19 = TSharedPtr<FJsonObject,1>::operator->(this);
          uVar15 = *(uint *)&(pFVar19->Values).field_0x28;
          puVar32 = (undefined8 *)0x0;
          uStack_100 = 0;
          uStack_fc = 1;
          puVar1 = &(pFVar19->Values).field_0x10;
          uStack_ec = uStack_100;
          local_e8 = uStack_100;
          if (uVar15 != 0) {
            puVar30 = *(uint **)&(pFVar19->Values).field_0x20;
            if (puVar30 == (uint *)0x0) {
              puVar30 = (uint *)puVar1;
            }
            uVar27 = *puVar30;
            puVar22 = puVar32;
            puVar29 = puVar32;
            local_e8 = 0;
            uStack_100 = 0;
            while (uVar27 == 0) {
              iVar23 = (int)puVar22;
              local_e8 = (int)puVar29 + 0x20;
              puVar29 = (undefined8 *)(ulonglong)local_e8;
              uStack_100 = iVar23 + 1;
              puVar22 = (undefined8 *)(ulonglong)uStack_100;
              uStack_ec = uVar15;
              if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_100)
              goto LAB_141dcf00e;
              uVar27 = puVar30[(longlong)iVar23 + 1];
            }
            uStack_fc = -uVar27 & uVar27;
            uVar26 = (ulonglong)uStack_fc * 2 + 1;
            lVar21 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_d8 = (int)lVar21;
            uStack_ec = (local_e8 - 1) + local_d8;
            if ((int)uVar15 < (int)uStack_ec) {
              uStack_ec = uVar15;
            }
          }
LAB_141dcf00e:
          uVar27 = *(uint *)&(pFVar19->Values).field_0x28;
          iStack_e0 = *(int *)&(pFVar19->Values).field_0x8 - *(int *)&(pFVar19->Values).field_0x34;
          uVar25 = uVar27 & 0xffffffe0;
          TStack_c8._padding_ = CONCAT44(uStack_fc,uStack_100);
          uStack_f0 = 0xffffffff;
          TStack_c8.CurrentBitIndex = uStack_ec;
          TStack_c8.UnvisitedBitMask = 0xffffffff;
          iVar23 = (int)uVar27 >> 5;
          TStack_c8._28_4_ = uStack_ec;
          TStack_c8.BaseBitIndex = local_e8;
          uStack_a8 = CONCAT44(uStack_dc,iStack_e0);
          local_130 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)pFVar19;
          local_108 = pFVar19;
          local_f8 = puVar1;
          uStack_e4 = uStack_ec;
          local_d0 = pFVar19;
          TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar27 < 0) || ((int)uVar15 < (int)uVar27)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          pTVar18 = local_130;
          uVar15 = *(uint *)&(pFVar19->Values).field_0x28;
          if (uVar27 != uVar15) {
            puVar28 = *(undefined1 **)&(pFVar19->Values).field_0x20;
            if (puVar28 == (undefined1 *)0x0) {
              puVar28 = puVar1;
            }
            uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar23 * 4);
            while (uVar27 == 0) {
              lVar21 = (longlong)iVar23;
              uVar25 = uVar25 + 0x20;
              iVar23 = iVar23 + 1;
              uVar27 = uVar15;
              if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
              goto LAB_141dcf120;
              uVar27 = *(uint *)(puVar28 + lVar21 * 4 + 4);
            }
            uVar26 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_d4 = (int)lVar21;
            uVar27 = local_d4 + -1 + uVar25;
            if ((int)uVar15 < (int)uVar27) {
              uVar27 = uVar15;
            }
          }
LAB_141dcf120:
          while( true ) {
            pFVar19 = local_d0;
            if (*(int *)&(local_d0->Values).field_0x8 - *(int *)&(local_d0->Values).field_0x34 !=
                (int)uStack_a8) {
              local_138[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
            }
            if (((TStack_c8.CurrentBitIndex == uVar27) &&
                (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               ((TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)pFVar19 == pTVar18))
            {
              return true;
            }
            pFVar2 = (FString *)
                     (*(longlong *)&pFVar19->Values + (longlong)TStack_c8.CurrentBitIndex * 0x28);
            if ((this_00->Object == (FJsonObject *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            pTVar20 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                              *)this_00->Object,pFVar2);
            puVar22 = (undefined8 *)&pTVar20->field_0x10;
            if (pTVar20 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
              puVar22 = puVar32;
            }
            if (puVar22 == (undefined8 *)0x0) break;
            pFVar6 = (FJsonValue *)pFVar2[1].Data.AllocatorInstance.Data;
            if ((pFVar6 != (FJsonValue *)0x0) != ((FJsonValue *)*puVar22 != (FJsonValue *)0x0)) {
              return false;
            }
            if ((pFVar6 != (FJsonValue *)0x0) &&
               (bVar11 = CompareEqual(pFVar6,(FJsonValue *)*puVar22), !bVar11)) {
              return false;
            }
            TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
          }
          return false;
        }
      }
    }
  }
  else if ((EVar3 - String < 3) && (param_2->Type - String < 3)) {
    pTVar16 = UE::Json::ToSimpleJsonVariant(&local_68,param_2);
    pTVar17 = UE::Json::ToSimpleJsonVariant(&local_80,param_1);
    bVar11 = ::operator==(pTVar17,pTVar16);
    if ((2 < (ulonglong)local_80.TypeIndex) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_80.TypeIndex])(&local_80);
    if ((2 < (ulonglong)local_68.TypeIndex) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_68.TypeIndex])(&local_68);
    return bVar11;
  }
  return false;
}

// Duplicate @ 141dd3660

TSharedPtr<FJsonValue,1> * __cdecl
FJsonValue::Duplicate
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TSharedPtr<FJsonValue,1> *param_1)

{
  EJson EVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  TSharedPtr<FJsonValue,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined **ppuVar9;
  TSharedRef<FJsonObject,1> *pTVar10;
  TSharedRef<FJsonValueObject,1> *pTVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  TSharedPtr<FJsonValue,1> *pTVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TSharedPtr<FJsonValue,1> *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong *local_90;
  TSharedPtr<FJsonObject,1> local_88;
  TSharedPtr<FJsonObject_const_,1> local_78;
  TSharedRef<FJsonObject,1> local_68;
  TSharedRef<FJsonValueObject,1> local_58;
  TSharedPtr<FJsonValue,1> local_48;
  
  if ((param_1->Object == (FJsonValue *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
    return pTVar7;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  EVar1 = param_1->Object->Type;
  if (EVar1 == String) {
LAB_141dd3882:
    local_a8 = (TSharedPtr<FJsonValue,1> *)0x0;
    local_a0 = 0;
    if ((param_1->Object == (FJsonValue *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
      return pTVar7;
    }
    cVar5 = (**(code **)(param_1->Object->_padding_ + 0x58))(param_1->Object,&local_a8);
    if (cVar5 == '\0') {
      if (local_a8 != (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_a8);
      }
LAB_141dd39d7:
      if ((param_1->Object == (FJsonValue *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
        return pTVar7;
      }
      cVar5 = (**(code **)(param_1->Object->_padding_ + 0x88))(param_1->Object,&local_98);
      if (cVar5 != '\0') {
        pTVar10 = MakeShared<FJsonObject,1>(&local_68);
        pTVar8 = (pTVar10->SharedReferenceCount).ReferenceController;
        local_88.Object = pTVar10->Object;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88.SharedReferenceCount.ReferenceController = pTVar8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        pTVar13 = (TReferenceControllerBase<1> *)local_98[1];
        local_78.Object = (FJsonObject *)*local_98;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78.SharedReferenceCount.ReferenceController = pTVar13;
        FJsonObject::Duplicate(&local_78,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        pTVar11 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_&>(&local_58,&local_88);
        __return_storage_ptr__->Object = (FJsonValue *)pTVar11->Object;
        pTVar13 = (pTVar11->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        return __return_storage_ptr__;
      }
LAB_141dd3aaf:
      if ((param_1->Object == (FJsonValue *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
        return pTVar7;
      }
      cVar5 = (**(code **)(param_1->Object->_padding_ + 0x78))(param_1->Object,&local_90);
      if (cVar5 == '\0') {
LAB_141dd36ec:
        __return_storage_ptr__->Object = (FJsonValue *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0 = 0;
      lVar15 = local_90[1];
      pTVar7 = (TSharedPtr<FJsonValue,1> *)*local_90;
      pTVar16 = pTVar7 + (int)lVar15;
      while( true ) {
        if ((int)local_90[1] != (int)lVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pTVar7 == pTVar16) break;
        pTVar12 = Duplicate(&local_48,pTVar7);
        if (((local_b8.Data <= pTVar12) &&
            (pTVar12 < (TSharedPtr<FJsonValue,1> *)(local_b8.Data + (longlong)local_b0._4_4_ * 0x10)
            )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
          return pTVar7;
        }
        iVar6 = (int)local_b0._0_4_;
        if (local_b0._0_4_ == (atomic<int>)local_b0._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
        }
        local_b0 = CONCAT44(local_b0._4_4_,iVar6 + 1);
        *(FJsonValue **)&local_b8.Data[(longlong)iVar6 * 0x10].field_0x0 = pTVar12->Object;
        *(TReferenceControllerBase<1> **)(local_b8.Data + (longlong)iVar6 * 0x10 + 8) =
             (pTVar12->SharedReferenceCount).ReferenceController;
        (pTVar12->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar12->Object = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        pTVar7 = pTVar7 + 1;
      }
      pTVar13 = ::operator_new(0x30);
      FVar14.Data = local_b8.Data;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        __return_storage_ptr__->Object = (FJsonValue *)0x10;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8 = pTVar13 + 2;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
        pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[1]._padding_ = (longlong)&___7FJsonValueArray__6B_;
        pTVar8->_padding_ = 0;
        aVar3 = local_b0._0_4_;
        pTVar13[2].SharedReferenceCount = local_b0._0_4_;
        if (local_b0._0_4_ == (atomic<int>)0x0) {
          pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(int)local_b0._0_4_,0,(ForAnyElementType *)pTVar8,(int)local_b0._0_4_,
                     (int *)&pTVar13[2].WeakReferenceCount);
          ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                    ((FScriptContainerElement *)pTVar8->_padding_,
                     (TSharedPtr<FJsonValue,1> *)FVar14.Data,(int)aVar3);
        }
        pTVar13[1].SharedReferenceCount = (atomic<int>)0x5;
        if ((pTVar13 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
          return pTVar7;
        }
        __return_storage_ptr__->Object = (FJsonValue *)(pTVar13 + 1);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        pTVar8 = pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_b8.Data,(int)local_b0._0_4_);
      FVar14.Data = local_b8.Data;
    }
    else {
      pTVar8 = ::operator_new(0x30);
      pTVar7 = local_a8;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        __return_storage_ptr__->Object = (FJsonValue *)0x10;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        FVar14.Data = (FScriptContainerElement *)local_a8;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13 = pTVar8 + 2;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__TJsonValueString__W___00_SharedPointerInternals__6B_
        ;
        pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[1]._padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        pTVar13->_padding_ = 0;
        lVar15 = (longlong)(int)local_a0._0_4_;
        pTVar8[2].SharedReferenceCount = local_a0._0_4_;
        if (local_a0._0_4_ == (atomic<int>)0x0) {
          pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_a0._0_4_,0,(ForAnyElementType *)pTVar13,(int)local_a0._0_4_,
                     (int *)&pTVar8[2].WeakReferenceCount);
          memcpy((FScriptContainerElement *)pTVar13->_padding_,pTVar7,lVar15 * 2);
        }
        pTVar8[1].SharedReferenceCount = (atomic<int>)0x2;
        if ((pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
          return pTVar7;
        }
        __return_storage_ptr__->Object = (FJsonValue *)(pTVar8 + 1);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        FVar14.Data = (FScriptContainerElement *)local_a8;
      }
    }
    if ((TSharedPtr<FJsonValue,1> *)FVar14.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(FVar14.Data);
    }
  }
  else {
    if (EVar1 == Number) {
LAB_141dd37ff:
      if ((param_1->Object == (FJsonValue *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
        return pTVar7;
      }
      cVar5 = (**(code **)(param_1->Object->_padding_ + 0x50))(param_1->Object,&local_res20);
      if (cVar5 == '\0') goto LAB_141dd3882;
      pTVar8 = ::operator_new(0x28);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_141dd37e7:
        __return_storage_ptr__->Object = (FJsonValue *)0x10;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
      ppuVar9 = &___7FJsonValueNumber__6B_;
      pTVar8[2]._padding_ = local_res20;
      pTVar8[1].SharedReferenceCount = (atomic<int>)0x3;
    }
    else {
      if (EVar1 != Boolean) {
        if (EVar1 != Array) {
          if (EVar1 != Object) goto LAB_141dd36ec;
          goto LAB_141dd39d7;
        }
        goto LAB_141dd3aaf;
      }
      if ((param_1->Object == (FJsonValue *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
        return pTVar7;
      }
      cVar5 = (**(code **)(param_1->Object->_padding_ + 0x68))(param_1->Object,local_res10);
      if (cVar5 == '\0') goto LAB_141dd37ff;
      pTVar8 = ::operator_new(0x28);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_141dd37e7;
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueBoolean___00_SharedPointerInternals__6B_;
      ppuVar9 = &___7FJsonValueBoolean__6B_;
      *(undefined1 *)&pTVar8[2]._padding_ = local_res10[0];
      pTVar8[1].SharedReferenceCount = (atomic<int>)0x4;
    }
    pTVar8[1]._padding_ = (longlong)ppuVar9;
    if ((pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FJsonValue,1> *)(*pcVar2)();
      return pTVar7;
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return __return_storage_ptr__;
}

// Duplicate @ 141dd3d20

TSharedPtr<FJsonValue,1> * __cdecl
FJsonValue::Duplicate
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TSharedPtr<FJsonValue_const_,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FJsonValue,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  Duplicate(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ErrorMessage @ 141dd4160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FJsonValue::ErrorMessage(FJsonValue *this,FString *param_1)

{
  void *local_18 [2];
  
  if ((this->Type == Null) || (this->Type == None)) {
    if ((byte)LogJson._0_1_ < 3) {
      return;
    }
    (**(code **)(this->_padding_ + 0xa8))(this,local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
  }
  else {
    if ((byte)LogJson._0_1_ < 2) {
      return;
    }
    (**(code **)(this->_padding_ + 0xa8))(this,local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// GetMemoryFootprint @ 141dd67d0

ulong64 __thiscall FJsonValue::GetMemoryFootprint(FJsonValue *this)

{
  return 0x10;
}

// IsNull @ 141dd81d0

bool __thiscall FJsonValue::IsNull(FJsonValue *this)

{
  if ((this->Type != Null) && (this->Type != None)) {
    return false;
  }
  return true;
}

// PreferStringRepresentation @ 141ddd090

bool __thiscall FJsonValue::PreferStringRepresentation(FJsonValue *this)

{
  return false;
}

// TryGetArray @ 141df9940

bool __thiscall
FJsonValue::TryGetArray
          (FJsonValue *this,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **param_1)

{
  return false;
}

// TryGetArray @ 141df9950

bool __thiscall
FJsonValue::TryGetArray
          (FJsonValue *this,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **param_1)

{
  return false;
}

// TryGetBool @ 141df9af0

bool __thiscall FJsonValue::TryGetBool(FJsonValue *this,bool *param_1)

{
  return false;
}

// TryGetNumber @ 141dfb4a0

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,schar *param_1)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (((cVar1 != '\0') && (__real_c060000000000000 <= local_res8[0])) &&
     (local_res8[0] <= __real_405fc00000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_1 = (schar)(int)dVar2;
    return true;
  }
  return false;
}

// TryGetNumber @ 141dfb500

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,uchar *param_1)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (((cVar1 != '\0') && (0.0 <= local_res8[0])) && (local_res8[0] <= __real_406fe00000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_1 = (uchar)(int)dVar2;
    return true;
  }
  return false;
}

// TryGetNumber @ 141dfb560

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,short *param_1)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (((cVar1 != '\0') && (__real_c0e0000000000000 <= local_res8[0])) &&
     (local_res8[0] <= __real_40dfffc000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_1 = (short)(int)dVar2;
    return true;
  }
  return false;
}

// TryGetNumber @ 141dfb5c0

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,ushort *param_1)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (((cVar1 != '\0') && (0.0 <= local_res8[0])) && (local_res8[0] <= __real_40efffe000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_1 = (ushort)(int)dVar2;
    return true;
  }
  return false;
}

// TryGetNumber @ 141dfb620

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,int *param_1)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (((cVar1 != '\0') && (__real_c1e0000000000000 <= local_res8[0])) &&
     (local_res8[0] <= __real_41dfffffffc00000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_1 = (int)dVar2;
    return true;
  }
  return false;
}

// TryGetNumber @ 141dfb680

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,uint *param_1)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (((cVar1 != '\0') && (0.0 <= local_res8[0])) && (local_res8[0] <= __real_41efffffffe00000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_1 = (uint)(longlong)dVar2;
    return true;
  }
  return false;
}

// TryGetNumber @ 141dfb6e0

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,float *param_1)

{
  char cVar1;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (cVar1 != '\0') {
    *param_1 = (float)local_res8[0];
    return true;
  }
  return false;
}

// TryGetNumber @ 141dfb720

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,double *param_1)

{
  return false;
}

// TryGetNumber @ 141dfb730

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,long64 *param_1)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (((cVar1 != '\0') && (__real_c3e0000000000000 <= local_res8[0])) &&
     (local_res8[0] < __real_43e0000000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_1 = (longlong)dVar2;
    return true;
  }
  return false;
}

// TryGetNumber @ 141dfb790

bool __thiscall FJsonValue::TryGetNumber(FJsonValue *this,ulong64 *param_1)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x50))(this,local_res8);
  if (((cVar1 != '\0') && (0.0 <= local_res8[0])) && (local_res8[0] < __real_43f0000000000000)) {
    dVar3 = FMath::RoundHalfFromZero(local_res8[0]);
    lVar2 = 0;
    if ((__real_43e0000000000000 <= dVar3) &&
       (dVar3 = dVar3 - __real_43e0000000000000, dVar3 < __real_43e0000000000000)) {
      lVar2 = -0x8000000000000000;
    }
    *param_1 = (longlong)dVar3 + lVar2;
    return true;
  }
  return false;
}

// TryGetObject @ 141dfbf20

bool __thiscall FJsonValue::TryGetObject(FJsonValue *this,TSharedPtr<FJsonObject,1> **param_1)

{
  return false;
}

// TryGetObject @ 141dfbf30

bool __thiscall FJsonValue::TryGetObject(FJsonValue *this,TSharedPtr<FJsonObject,1> **param_1)

{
  return false;
}

// TryGetString @ 141dfc200

bool __thiscall FJsonValue::TryGetString(FJsonValue *this,FString *param_1)

{
  return false;
}

// TryGetUtf8String @ 141dfc840

bool __thiscall FJsonValue::TryGetUtf8String(FJsonValue *this,FUtf8String *param_1)

{
  return false;
}

