// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// <lambda_invoker_cdecl> @ 141f54a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(double param_1)

{
  if (3 < (byte)LogClass._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_AttemptToFindUn_15080daa0,
               (FLogCategoryBase *)&LogClass);
    return;
  }
  return;
}

// operator() @ 141f6aaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>::operator()
          (void *this,double param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28 [2];
  
  bVar2 = false;
  if (3 < (byte)LogClass._0_1_) {
    if (*(UObjectBaseUtility **)this != (UObjectBaseUtility *)0x0) {
      pFVar1 = UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,local_28,(UObject *)0x0)
      ;
      if ((pFVar1->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if ((bVar2) && (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ArePropertiesTheSame @ 141f6f5d0

bool __cdecl FStructUtils::ArePropertiesTheSame(FProperty *param_1,FProperty *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == param_2) {
    return true;
  }
  if ((param_1 != (FProperty *)0x0) && (param_2 != (FProperty *)0x0)) {
    if (param_3) {
      bVar1 = IsThisNotNull(param_2,"FField::GetFName");
      lVar3 = 0;
      lVar4 = lVar3;
      if (bVar1) {
        lVar4 = param_2->_padding_;
      }
      bVar1 = IsThisNotNull(param_1,"FField::GetFName");
      if (bVar1) {
        lVar3 = param_1->_padding_;
      }
      if (lVar3 != lVar4) {
        return false;
      }
    }
    if (((param_1->ElementSize * param_1->ArrayDim == param_2->ElementSize * param_2->ArrayDim) &&
        (param_1->Offset_Internal == param_2->Offset_Internal)) &&
       (cVar2 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_2), cVar2 != '\0')) {
      return true;
    }
  }
  return false;
}

// AttemptToFindUninitializedScriptStructMembers @ 141f6fb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __cdecl FStructUtils::AttemptToFindUninitializedScriptStructMembers(void)

{
  ulonglong uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  EInternalObjectFlags EVar9;
  uint uVar10;
  uint uVar11;
  UScriptStruct *pUVar12;
  FName *pFVar13;
  FProperty *pFVar14;
  FProperty *this;
  UClass *pUVar15;
  FUObjectItem *pFVar16;
  ICppStructOps *pIVar17;
  UPackage *pUVar18;
  FModuleManager *this_00;
  FString *pFVar19;
  undefined8 uVar20;
  byte bVar21;
  undefined ***pppuVar22;
  uint *puVar23;
  longlong *plVar24;
  wchar_t *pwVar25;
  ForElementType<FSetElementId> FVar26;
  longlong lVar27;
  uint uVar28;
  UScriptStruct *this_01;
  uint uVar29;
  Type TVar30;
  FProperty *pFVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  undefined1 auStackY_5e8 [32];
  undefined1 local_588;
  undefined1 local_587 [3];
  int local_584;
  uint local_580;
  uint local_57c;
  uint local_578;
  UScriptStruct *local_570;
  TObjectIterator<UScriptStruct> local_568;
  int local_550;
  uint uStack_54c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_548;
  undefined4 local_540;
  uint uStack_53c;
  int iStack_538;
  undefined4 uStack_534;
  FScriptStructTestWrapper local_530;
  longlong *local_510;
  undefined8 uStack_508;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_500;
  uint uStack_4f8;
  uint uStack_4f4;
  int iStack_4f0;
  undefined4 uStack_4ec;
  int local_4e8;
  undefined4 uStack_4e4;
  UScriptStruct *local_4e0;
  FModuleStatus local_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4b0;
  FName local_490;
  FName local_488;
  LARGE_INTEGER local_480;
  LARGE_INTEGER local_478;
  FName local_470;
  undefined1 local_468 [8];
  FName local_460;
  FName local_458;
  FName local_450;
  FName local_448;
  LARGE_INTEGER local_440;
  double local_438;
  LARGE_INTEGER local_430;
  double local_428;
  LARGE_INTEGER local_420;
  double local_418;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  int local_360;
  int local_35c;
  int local_358;
  LARGE_INTEGER local_350;
  longlong *local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_340;
  undefined8 uStack_320;
  longlong *local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_310;
  undefined8 uStack_2f0;
  code *local_2e8;
  undefined **local_2d8;
  code *local_2d0;
  undefined ***local_2c0;
  code *local_2b8;
  undefined **local_2a8;
  UScriptStruct *local_2a0;
  undefined ***local_290;
  FScriptContainerElement *local_288;
  uint uStack_280;
  undefined4 uStack_27c;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FScriptContainerElement *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  FString local_258;
  FScriptContainerElement *local_248;
  undefined8 uStack_240;
  FString local_238;
  FString local_228;
  TStringView<wchar_t> local_218;
  FString local_208;
  FString local_1f8;
  TStringView<wchar_t> local_1e8;
  FName local_1d8;
  FString local_1d0;
  FName local_1c0;
  FString local_1b8;
  FString local_1a8 [2];
  undefined4 local_17c;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  undefined1 local_140 [8];
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  double local_d8;
  double local_d0;
  code *local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  double local_98;
  double local_90;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  pFVar31 = (FProperty *)0x0;
  local_2d8 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_2c0 = (undefined ***)0x0;
  local_2d0 = `FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_2e8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
              Call;
  QueryPerformanceCounter(&local_350);
  dVar4 = __real_4170000000000000;
  local_88 = local_2e8;
  local_60 = (longlong *)0x0;
  local_98 = (double)local_350.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  local_90 = __real_4000000000000000;
  if (local_2e8 != (code *)0x0) {
    pppuVar22 = &local_2d8;
    if (local_2c0 != (undefined ***)0x0) {
      pppuVar22 = local_2c0;
    }
    (*(code *)**pppuVar22)(SUB84(__real_4000000000000000,0),local_78);
    if (local_2e8 != (code *)0x0) {
      pppuVar22 = &local_2d8;
      if (local_2c0 != (undefined ***)0x0) {
        pppuVar22 = local_2c0;
      }
      (*(code *)(*pppuVar22)[2])();
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    `FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::FScriptStructSettings::
    FScriptStructSettings(&Settings);
    _Init_thread_footer(&::_TSS0);
  }
  local_584 = 0;
  pUVar12 = FTestUninitializedScriptStructMembersTest::StaticStruct();
  local_4e0 = pUVar12;
  if ((pUVar12 == (UScriptStruct *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestUninitializedScriptStructMembersTestStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x10e5,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  local_530.TempBuffer = (uchar *)0x0;
  local_530.InitValue = 0xfe;
  local_530.ConstrutorSyntax = NoInit;
  local_530.bTempBufferAttemptedCreate = false;
  local_530.ScriptStruct = pUVar12;
  pFVar13 = ::FName::FName(&local_1c0,L"UninitializedObjectReference");
  pFVar14 = UStruct::FindPropertyByName((UStruct *)pUVar12,*pFVar13);
  if (((pFVar14 == (FProperty *)0x0) || ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x10 & 1) == 0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar14 = pFVar31,
        bVar7)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  pFVar13 = ::FName::FName(&local_1d8,L"InitializedObjectReference");
  this = UStruct::FindPropertyByName((UStruct *)pUVar12,*pFVar13);
  if (((this == (FProperty *)0x0) || ((*(uint *)(this->_padding_ + 0x18) >> 0x10 & 1) == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"), this = pFVar31, bVar7))
  {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  if (local_530.bTempBufferAttemptedCreate == false) {
    FScriptStructTestWrapper::AttemptCreateTempBuffer(&local_530);
  }
  puVar6 = local_530.TempBuffer;
  if ((pFVar14->ArrayDim < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  if ((puVar6 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  if ((*(longlong *)(puVar6 + pFVar14->Offset_Internal) != -0x101010101010102) &&
     (1 < (byte)LogClass._0_1_)) {
    FProperty::GetNameCPP(pFVar14,&local_1b8);
    local_490 = (FName)pUVar12->_padding_;
    ::FName::ToString(&local_490,&local_410);
    (**(code **)(pUVar12->_padding_ + 0x318))(pUVar12);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_530.bTempBufferAttemptedCreate == false) {
    FScriptStructTestWrapper::AttemptCreateTempBuffer(&local_530);
  }
  puVar6 = local_530.TempBuffer;
  if ((this->ArrayDim < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  if ((puVar6 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  if ((*(longlong *)(puVar6 + this->Offset_Internal) != 0) && (1 < (byte)LogClass._0_1_)) {
    FProperty::GetNameCPP(this,&local_258);
    local_488 = (FName)pUVar12->_padding_;
    ::FName::ToString(&local_488,&local_400);
    (**(code **)(pUVar12->_padding_ + 0x318))(pUVar12);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  puVar6 = local_530.TempBuffer;
  if (local_530.TempBuffer != (uchar *)0x0) {
    (**(code **)((local_530.ScriptStruct)->_padding_ + 0x300))
              (local_530.ScriptStruct,local_530.TempBuffer,1);
    FMemory::Free(puVar6);
  }
  QueryPerformanceCounter(&local_480);
  if ((__real_3fa999999999999a <
       ((double)local_480.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) - local_98) &&
     (3 < (byte)LogClass._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
  }
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_178._0_8_ = (FScriptContainerElement *)0x0;
  local_178._8_8_ = 0;
  local_158 = (uint *)0x0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  local_568.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.ObjectArray.ArrayNum = 0;
  local_568.ObjectArray.ArrayMax = 0;
  local_568.Index = 0xffffffff;
  EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar15 = UScriptStruct::StaticClass();
  GetObjectsOfClass(pUVar15,&local_568.ObjectArray,true,RF_ClassDefaultObject,
                    EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UScriptStruct>::Advance(&local_568);
  dVar5 = __real_3f50624dd2f1a9fc;
  do {
    while( true ) {
      lVar27 = (longlong)local_568.Index;
      uVar29 = 0;
      if ((local_568.Index < 0) || (local_568.ObjectArray.ArrayNum <= local_568.Index)) {
        if (local_568.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.ObjectArray.AllocatorInstance.Data);
        }
        iVar8 = local_584;
        if ((0 < local_584) && (3 < (byte)LogClass._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        }
        local_130 = 0;
        if (local_138 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_138);
        }
        TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_178);
        local_e0 = 0;
        if (local_e8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8);
        }
        TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_128);
        QueryPerformanceCounter(&local_420);
        dVar4 = ((double)local_420.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
                local_98;
        if (local_90 < dVar4) {
          local_418 = dVar4;
          UE::Core::Private::Function::CheckCallable(local_88);
          pcVar2 = local_88;
          plVar24 = local_78;
          if (local_60 != (longlong *)0x0) {
            plVar24 = local_60;
          }
          uVar20 = (**(code **)(*plVar24 + 8))();
          (*pcVar2)(uVar20,&local_418);
        }
        if (local_88 != (code *)0x0) {
          plVar24 = local_78;
          if (local_60 != (longlong *)0x0) {
            plVar24 = local_60;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        return iVar8;
      }
      uVar10 = uVar29;
      if (local_568.Index < local_568.ObjectArray.ArrayNum) {
        uVar10 = (uint)~local_568.Index >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      local_290 = (undefined ***)0x0;
      local_2a8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::`75'::<lambda_3>,0,0>
                   ::_vftable_;
      local_2b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,void,double>
                  ::Call;
      this_01 = *(UScriptStruct **)(local_568.ObjectArray.AllocatorInstance.Data + lVar27 * 8);
      local_570 = this_01;
      local_2a0 = this_01;
      QueryPerformanceCounter(&local_478);
      local_d0 = dVar5;
      local_c8 = local_2b8;
      local_a0 = (longlong *)0x0;
      local_d8 = (double)local_478.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
      if (local_2b8 != (code *)0x0) {
        pppuVar22 = &local_2a8;
        if (local_290 != (undefined ***)0x0) {
          pppuVar22 = local_290;
        }
        (*(code *)**pppuVar22)(SUB84(local_d8,0),local_b8);
        if (local_2b8 != (code *)0x0) {
          pppuVar22 = &local_2a8;
          if (local_290 != (undefined ***)0x0) {
            pppuVar22 = local_290;
          }
          (*(code *)(*pppuVar22)[2])();
        }
      }
      if ((((this_01 == (UScriptStruct *)0x0) ||
           (pFVar16 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4)),
           ((uint)((ulonglong)(pFVar16->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) ||
          ((pIVar17 = UScriptStruct::GetCppStructOps(this_01), pIVar17 != (ICppStructOps *)0x0 &&
           (pIVar17 = UScriptStruct::GetCppStructOps(this_01),
           (pIVar17->FakeVPtr->Capabilities).HasZeroConstructor)))) || (this_01 == pUVar12)) break;
      if (local_128._8_4_ != local_f4) {
        TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                        *)local_128);
        bVar7 = (longlong)local_128._8_8_ < 0;
        local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
        if (bVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
        }
        local_f8 = 0xffffffff;
        local_f4 = 0;
        local_100 = 0;
      }
      if (local_178._8_4_ != local_144) {
        TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                        *)local_178);
        bVar7 = (longlong)local_178._8_8_ < 0;
        local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
        if (bVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
        }
        local_148 = 0xffffffff;
        local_144 = 0;
        local_150 = 0;
      }
      FindUninitializedScriptStructMembers
                (this_01,CompilerZeroed,
                 (TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                  *)local_178);
      FindUninitializedScriptStructMembers
                (this_01,NoInit,
                 (TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                  *)local_128);
      if ((local_128._8_4_ == local_f4) && (local_178._8_4_ == local_144)) {
        `FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::
        FExecuteIfExceedsTimeLimit::~FExecuteIfExceedsTimeLimit(&local_d8);
        TObjectIterator<UScriptStruct>::Advance(&local_568);
      }
      else {
        pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
        local_470 = (FName)pUVar18->_padding_;
        ::FName::ToString(&local_470,&local_3f0);
        local_288 = local_3f0.Data.AllocatorInstance.Data;
        uStack_280 = local_3f0.Data.ArrayNum - 1;
        if (local_3f0.Data.ArrayNum == 0) {
          uStack_280 = uVar29;
        }
        uStack_240 = CONCAT44(uStack_27c,uStack_280);
        local_248 = local_3f0.Data.AllocatorInstance.Data;
        FPackageName::GetShortFName((TStringView<wchar_t> *)local_468);
        if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
        }
        local_4d8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d8.Name.Data.ArrayNum = 0;
        local_4d8.Name.Data.ArrayMax = 0;
        local_4d8.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d8.FilePath.Data.ArrayNum = 0;
        local_4d8.FilePath.Data.ArrayMax = 0;
        local_4d8.bIsLoaded = false;
        local_4d8.bIsGameModule = false;
        this_00 = FModuleManager::Get();
        bVar7 = FModuleManager::QueryModule(this_00,(FName)local_468,&local_4d8);
        if (bVar7) {
          pFVar19 = FPaths::ProjectDir(&local_228);
          pFVar19 = FPaths::ConvertRelativePathToFull(&local_238,pFVar19);
          iVar8 = (pFVar19->Data).ArrayNum;
          if (iVar8 == 0) {
            pwVar25 = L"";
          }
          else {
            pwVar25 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
            uVar29 = iVar8 - 1;
          }
          bVar7 = ::FString::StartsWith(&local_4d8.FilePath,pwVar25,uVar29,IgnoreCase);
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          bVar7 = !bVar7;
          if (local_4d8.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.FilePath.Data.AllocatorInstance.Data);
          }
          if (local_4d8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Name.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (local_4d8.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.FilePath.Data.AllocatorInstance.Data);
          }
          if (local_4d8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Name.Data.AllocatorInstance.Data);
          }
          bVar7 = false;
        }
        uVar29 = local_150;
        TVar30 = Settings.ProjectVerbosity;
        if (bVar7) {
          TVar30 = Settings.EngineVerbosity;
        }
        uVar10 = (uint)TVar30;
        uVar11 = (uint)Settings.PointerVerbosity;
        if (TVar30 < Settings.PointerVerbosity) {
          uVar11 = uVar10;
        }
        local_550 = 0;
        pTStack_548 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
        uStack_54c = 1;
        uStack_53c = 0;
        iStack_538 = 0;
        if (local_150 != 0) {
          puVar23 = (uint *)(local_178 + 0x10);
          if (local_158 != (uint *)0x0) {
            puVar23 = local_158;
          }
          uVar28 = *puVar23;
          while (uVar28 == 0) {
            iStack_538 = iStack_538 + 0x20;
            lVar27 = (longlong)local_550;
            local_550 = local_550 + 1;
            if ((int)(((int)(local_150 - 1) >> 0x1f & 0x1fU) + (local_150 - 1)) >> 5 < local_550) {
              uStack_53c = local_150;
              goto LAB_141f70673;
            }
            uVar28 = puVar23[lVar27 + 1];
          }
          uStack_54c = -uVar28 & uVar28;
          uVar1 = (ulonglong)uStack_54c * 2 + 1;
          lVar27 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_360 = (int)lVar27;
          uStack_53c = iStack_538 + -1 + local_360;
          if ((int)local_150 < (int)uStack_53c) {
            uStack_53c = local_150;
          }
        }
LAB_141f70673:
        local_540 = 0xffffffff;
        uStack_508 = CONCAT44(uStack_54c,local_550);
        local_510 = (longlong *)local_178;
        uStack_4f4 = uStack_53c;
        uStack_4f8 = 0xffffffff;
        uStack_4ec = uStack_534;
        iStack_4f0 = iStack_538;
        pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
        bVar21 = (byte)local_150 & 0x1f;
        local_4e8 = local_178._8_4_ - local_144;
        local_4b0._padding_._0_4_ = (int)local_150 >> 5;
        local_4b0._padding_._4_4_ = 1 << bVar21;
        local_4b0.UnvisitedBitMask = -1 << bVar21;
        local_4b0.BaseBitIndex = local_150 & 0xffffffe0;
        local_4b0.CurrentBitIndex = local_150;
        uStack_320 = CONCAT44(uStack_4e4,local_4e8);
        local_57c = uVar10;
        local_578 = uVar11;
        pTStack_500 = pTStack_548;
        local_4b0.Array = pTVar32;
        local_348 = local_510;
        TStack_340._padding_ = uStack_508;
        TStack_340.Array = pTStack_548;
        TStack_340._16_8_ = _uStack_4f8;
        TStack_340._24_8_ = _iStack_4f0;
        if (((int)local_150 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          iVar8 = (*pcVar2)();
          return iVar8;
        }
        if (uVar29 != local_150) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4b0);
          pTVar32 = local_4b0.Array;
        }
        while( true ) {
          plVar24 = local_348;
          TVar30 = (Type)uVar10;
          if ((int)local_348[1] - *(int *)((longlong)local_348 + 0x34) != (int)uStack_320) {
            local_588 = 0;
            `TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_588);
          }
          uVar29 = local_100;
          if (((TStack_340.CurrentBitIndex == local_4b0.CurrentBitIndex) &&
              (TStack_340.Array == pTVar32)) && (plVar24 == (longlong *)local_178)) break;
          local_584 = local_584 + 1;
          pFVar14 = *(FProperty **)(*plVar24 + (longlong)TStack_340.CurrentBitIndex * 0x10);
          uVar1 = *(ulonglong *)(pFVar14->_padding_ + 0x18);
          if ((uVar1 & 0x4000000) != 0) {
            TVar30 = (Type)uVar11;
          }
          local_580 = (uint)pFVar31 + 1;
          if ((uVar1 & 0x4000000) == 0) {
            local_580 = (uint)pFVar31;
          }
          pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
          local_460 = (FName)pUVar18->_padding_;
          ::FName::ToString(&local_460,&local_3e0);
          local_278 = local_3e0.Data.AllocatorInstance.Data;
          iStack_270 = local_3e0.Data.ArrayNum + -1;
          if (local_3e0.Data.ArrayNum == 0) {
            iStack_270 = 0;
          }
          local_218._12_4_ = uStack_26c;
          local_218.Size = iStack_270;
          local_218.DataPtr = (wchar_t *)local_3e0.Data.AllocatorInstance.Data;
          FPackageName::GetShortName(&local_208,&local_218);
          ::FString::PrintfImpl(&local_3b0,L" Module:%s");
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
          }
          FProperty::GetNameCPP(pFVar14,&local_1f8);
          pUVar12 = local_570;
          local_458 = (FName)local_570->_padding_;
          ::FName::ToString(&local_458,&local_3c0);
          (**(code **)(pUVar12->_padding_ + 0x318))(pUVar12);
          ::FName::ToString((FName *)pFVar14->_padding_,&local_3d0);
          FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x1131,(FName *)&LogClass.field_0x4,TVar30,L"%s %s%s::%s %s.%s");
          if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
          }
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
          TStack_340.UnvisitedBitMask = TStack_340.UnvisitedBitMask & ~TStack_340._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_340);
          pFVar31 = (FProperty *)(ulonglong)local_580;
          this_01 = local_570;
          uVar10 = local_57c;
          uVar11 = local_578;
        }
        iVar8 = 0;
        uVar11 = 1;
        iStack_4f0 = 0;
        uStack_4f4 = 0;
        if (local_100 != 0) {
          puVar23 = (uint *)(local_128 + 0x10);
          if (local_108 != (uint *)0x0) {
            puVar23 = local_108;
          }
          uVar28 = *puVar23;
          iStack_4f0 = 0;
          while (uVar28 == 0) {
            lVar27 = (longlong)iVar8;
            iStack_4f0 = iStack_4f0 + 0x20;
            iVar8 = iVar8 + 1;
            uStack_4f4 = local_100;
            if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 < iVar8)
            goto LAB_141f70a73;
            uVar28 = puVar23[lVar27 + 1];
          }
          uVar11 = -uVar28 & uVar28;
          uVar1 = (ulonglong)uVar11 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_35c = (int)lVar27;
          uStack_4f4 = iStack_4f0 + -1 + local_35c;
          if ((int)local_100 < (int)uStack_4f4) {
            uStack_4f4 = local_100;
          }
        }
LAB_141f70a73:
        local_510 = (longlong *)local_128;
        pTStack_500 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
        uVar28 = local_100 & 0xffffffe0;
        local_4e8 = local_128._8_4_ - local_f4;
        uStack_508 = CONCAT44(uVar11,iVar8);
        uStack_4f8 = 0xffffffff;
        uStack_4ec = local_17c;
        TStack_310._padding_ = uStack_508;
        iVar8 = (int)local_100 >> 5;
        uStack_2f0 = CONCAT44(uStack_4e4,local_4e8);
        bVar21 = (byte)local_100;
        TStack_310.UnvisitedBitMask = 0xffffffff;
        TStack_310.CurrentBitIndex = uStack_4f4;
        TStack_310.BaseBitIndex = iStack_4f0;
        TStack_310._28_4_ = local_17c;
        local_318 = local_510;
        TStack_310.Array = pTStack_500;
        if (((int)local_100 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          iVar8 = (*pcVar2)();
          return iVar8;
        }
        if (uVar29 != local_100) {
          puVar23 = (uint *)(local_128 + 0x10);
          if (local_108 != (uint *)0x0) {
            puVar23 = local_108;
          }
          uVar29 = -1 << (bVar21 & 0x1f) & puVar23[iVar8];
          while (uVar29 == 0) {
            lVar27 = (longlong)iVar8;
            uVar28 = uVar28 + 0x20;
            iVar8 = iVar8 + 1;
            uVar29 = local_100;
            if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 < iVar8)
            goto LAB_141f70b93;
            uVar29 = puVar23[lVar27 + 1];
          }
          uVar1 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
          lVar27 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_358 = (int)lVar27;
          uVar29 = (uVar28 - 1) + local_358;
          if ((int)local_100 < (int)uVar29) {
            uVar29 = local_100;
          }
        }
LAB_141f70b93:
        while( true ) {
          plVar24 = local_318;
          if ((int)local_318[1] - *(int *)((longlong)local_318 + 0x34) != (int)uStack_2f0) {
            local_587[0] = 0;
            `TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_587);
          }
          pUVar12 = local_570;
          if (((TStack_310.CurrentBitIndex == uVar29) &&
              (TStack_310.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
             (plVar24 == (longlong *)local_128)) break;
          pFVar14 = *(FProperty **)(*plVar24 + (longlong)TStack_310.CurrentBitIndex * 0x10);
          uVar11 = ((uint)((ulonglong)pFVar14 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar14 >> 4)) *
                   -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          if (local_178._8_4_ != local_144) {
            FVar26 = (ForElementType<FSetElementId>)local_140;
            if (local_138 != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_138;
            }
            for (iVar8 = *(int *)((longlong)FVar26 +
                                 (ulonglong)(local_130 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
                iVar8 != -1; iVar8 = *(int *)(local_178._0_8_ + (longlong)iVar8 * 0x10 + 8)) {
              if (*(FProperty **)(local_178._0_8_ + (longlong)iVar8 * 0x10) == pFVar14)
              goto LAB_141f70ea9;
            }
          }
          local_584 = local_584 + 1;
          uVar1 = *(ulonglong *)(pFVar14->_padding_ + 0x18);
          TVar30 = (Type)uVar10;
          if ((uVar1 & 0x4000000) != 0) {
            TVar30 = (Type)local_578;
          }
          local_580 = (uint)pFVar31 + 1;
          if ((uVar1 & 0x4000000) == 0) {
            local_580 = (uint)pFVar31;
          }
          pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)local_570);
          local_450 = (FName)pUVar18->_padding_;
          ::FName::ToString(&local_450,&local_3a0);
          local_268 = local_3a0.Data.AllocatorInstance.Data;
          iStack_260 = local_3a0.Data.ArrayNum + -1;
          if (local_3a0.Data.ArrayNum == 0) {
            iStack_260 = 0;
          }
          local_1e8._12_4_ = uStack_25c;
          local_1e8.Size = iStack_260;
          local_1e8.DataPtr = (wchar_t *)local_3a0.Data.AllocatorInstance.Data;
          FPackageName::GetShortName(local_1a8,&local_1e8);
          ::FString::PrintfImpl(&local_370,L" Module:%s");
          if (local_1a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8[0].Data.AllocatorInstance.Data);
          }
          if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
          }
          FProperty::GetNameCPP(pFVar14,&local_1d0);
          local_448 = (FName)pUVar12->_padding_;
          ::FName::ToString(&local_448,&local_380);
          (**(code **)(pUVar12->_padding_ + 0x318))(pUVar12);
          ::FName::ToString((FName *)pFVar14->_padding_,&local_390);
          FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x1131,(FName *)&LogClass.field_0x4,TVar30,L"%s %s%s::%s %s.%s");
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
          if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_380.Data.AllocatorInstance.Data);
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_370.Data.AllocatorInstance.Data);
          }
          pFVar31 = (FProperty *)(ulonglong)local_580;
          uVar10 = local_57c;
LAB_141f70ea9:
          TStack_310.UnvisitedBitMask = TStack_310.UnvisitedBitMask & ~TStack_310._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_310);
        }
        QueryPerformanceCounter(&local_440);
        dVar3 = ((double)local_440.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
                local_d8;
        if (local_d0 < dVar3) {
          local_438 = dVar3;
          UE::Core::Private::Function::CheckCallable(local_c8);
          pcVar2 = local_c8;
          plVar24 = local_b8;
          if (local_a0 != (longlong *)0x0) {
            plVar24 = local_a0;
          }
          uVar20 = (**(code **)(*plVar24 + 8))();
          (*pcVar2)(uVar20,&local_438);
        }
        pUVar12 = local_4e0;
        if (local_c8 != (code *)0x0) {
          plVar24 = local_b8;
          if (local_a0 != (longlong *)0x0) {
            plVar24 = local_a0;
          }
          (**(code **)(*plVar24 + 0x10))();
          pUVar12 = local_4e0;
        }
LAB_141f70f7b:
        TObjectIterator<UScriptStruct>::Advance(&local_568);
      }
    }
    QueryPerformanceCounter(&local_430);
    dVar3 = ((double)local_430.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) - local_d8;
    if (local_d0 < dVar3) {
      local_428 = dVar3;
      UE::Core::Private::Function::CheckCallable(local_c8);
      pcVar2 = local_c8;
      plVar24 = local_b8;
      if (local_a0 != (longlong *)0x0) {
        plVar24 = local_a0;
      }
      uVar20 = (**(code **)(*plVar24 + 8))();
      (*pcVar2)(uVar20,&local_428);
    }
    if (local_c8 == (code *)0x0) goto LAB_141f70f7b;
    plVar24 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar24 = local_a0;
    }
    (**(code **)(*plVar24 + 0x10))();
    TObjectIterator<UScriptStruct>::Advance(&local_568);
  } while( true );
}

// FindStructureInPackageChecked @ 141f7cd70

UStruct * __cdecl FStructUtils::FindStructureInPackageChecked(wchar_t *param_1,wchar_t *param_2)

{
  uint uVar1;
  int iVar2;
  UClass *pUVar4;
  UStruct *pUVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int iVar10;
  UObject *pUVar11;
  undefined1 local_res18 [8];
  FName local_res20;
  UObject *local_38 [2];
  undefined1 local_28 [16];
  size_t sVar3;
  
  ::FName::FName((FName *)(local_res18 + 8),param_2);
  local_28._0_8_ = param_1;
  if (local_res20 == (FName)0x0) {
    iVar10 = 0;
    if (param_1 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_1);
      iVar10 = (int)sVar3;
    }
    local_28._8_4_ = iVar10;
    pUVar4 = UStruct::StaticClass();
    pUVar5 = (UStruct *)UClass::TryFindTypeSlow(pUVar4,(TStringView<wchar_t> *)local_28,None);
    if (pUVar5 == (UStruct *)0x0) {
      pFVar6 = GetTypeName<UStruct>((FString *)local_28);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar9);
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FStructUtils::FindStructureInPackageChecked'::__l5::
             _dynamic_atexit_destructor_for__StaticStructPackageMap__);
      _Init_thread_footer(&::_TSS0);
    }
    uVar1 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
    iVar10 = 0;
    if (StaticStructPackageMap._8_4_ != StaticStructPackageMap._52_4_) {
      lVar8 = 0x154b88698;
      if (StaticStructPackageMap._64_8_ != 0) {
        lVar8 = StaticStructPackageMap._64_8_;
      }
      iVar2 = *(int *)(lVar8 + (ulonglong)
                               (StaticStructPackageMap._72_4_ - 1 & local_res20.Number + uVar1) * 4)
      ;
      while (iVar2 != -1) {
        lVar8 = StaticStructPackageMap._0_8_ + (longlong)iVar2 * 0x18;
        if ((FName)*(UPackage ***)(StaticStructPackageMap._0_8_ + (longlong)iVar2 * 0x18) ==
            local_res20) {
          puVar7 = (undefined8 *)(lVar8 + 8);
          if (lVar8 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 != (undefined8 *)0x0) {
            pUVar11 = (UObject *)*puVar7;
            goto LAB_141f7cebd;
          }
          break;
        }
        iVar2 = *(int *)(lVar8 + 0x10);
      }
    }
    iVar2 = iVar10;
    local_28._0_8_ = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_2);
      iVar2 = (int)sVar3;
    }
    local_28._8_4_ = iVar2;
    pUVar4 = Z_Construct_UClass_UPackage_NoRegister();
    local_38[0] = StaticFindObjectChecked
                            (pUVar4,(UObject *)0x0,(TStringView<wchar_t> *)local_28,None);
    local_28._0_8_ = local_res18 + 8;
    local_28._8_8_ = local_38;
    TSet<TTuple<FName,UPackage_*>,TDefaultMapHashableKeyFuncs<FName,UPackage_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UPackage_*_&&>_>
              ((TSet<TTuple<FName,UPackage_*>,TDefaultMapHashableKeyFuncs<FName,UPackage_*,0>,FDefaultSetAllocator>
                *)&StaticStructPackageMap,
               (TPairInitializer<FName_const_&,UPackage_*_&&> *)local_res18,(bool *)local_28);
    pUVar11 = *(UObject **)
               (StaticStructPackageMap._0_8_ + 8 + (longlong)(int)local_res18._0_4_ * 0x18);
LAB_141f7cebd:
    local_28._0_8_ = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_1);
      iVar10 = (int)sVar3;
    }
    local_28._8_4_ = iVar10;
    pUVar4 = UStruct::StaticClass();
    pUVar5 = (UStruct *)
             StaticFindObjectChecked(pUVar4,pUVar11,(TStringView<wchar_t> *)local_28,None);
  }
  return pUVar5;
}

// TheSameLayout @ 141fae340

/* WARNING: Type propagation algorithm not settling */

bool __cdecl FStructUtils::TheSameLayout(UStruct *param_1,UStruct *param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UStruct *pUVar6;
  UStruct *pUVar7;
  TObjectPtr<UField>_u_0 TVar8;
  UStruct *pUVar9;
  longlong local_res8;
  longlong local_res10;
  
  if (param_1 == param_2) {
    return true;
  }
  bVar3 = false;
  if ((((param_1 != (UStruct *)0x0) && (param_2 != (UStruct *)0x0)) &&
      (param_1->PropertiesSize == param_2->PropertiesSize)) &&
     (param_1->MinAlignment == param_2->MinAlignment)) {
    bVar3 = true;
    TVar8 = (TObjectPtr<UField>_u_0)param_1->PropertyLink;
    pUVar9 = (UStruct *)0x0;
    pUVar6 = (UStruct *)param_2->PropertyLink;
    do {
      if ((UStruct *)TVar8.DebugPtr == pUVar6) {
        pUVar5 = UClass::GetPrivateStaticClass();
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          param_1 = pUVar9;
        }
        pUVar5 = UClass::GetPrivateStaticClass();
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(param_2->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          param_2 = pUVar9;
        }
        if (param_1 == (UStruct *)0x0) {
          return bVar3;
        }
        if (param_2 == (UStruct *)0x0) {
          return bVar3;
        }
        bVar3 = TheSameLayout((UStruct *)param_1[1].PropertyLink,(UStruct *)param_2[1].PropertyLink,
                              param_3);
        return bVar3;
      }
      if (((UStruct *)TVar8.DebugPtr == (UStruct *)0x0) || (pUVar6 == (UStruct *)0x0)) {
        bVar3 = false;
        bVar2 = false;
        if ((UStruct *)TVar8.DebugPtr == (UStruct *)0x0) {
          TVar8.DebugPtr = (UField *)0x0;
        }
        else {
          TVar8 = (TObjectPtr<UField>_u_0)
                  (((TObjectPtr<UField> *)&TVar8.DebugPtr[1]._padding_)->field0_0x0).DebugPtr;
        }
      }
      else {
        if (param_3) {
          bVar3 = IsThisNotNull(pUVar6,"FField::GetFName");
          if (bVar3) {
            local_res8 = pUVar6->_padding_;
          }
          else {
            local_res8 = 0;
          }
          bVar3 = IsThisNotNull(TVar8.DebugPtr,"FField::GetFName");
          if (bVar3) {
            local_res10 = (TVar8.DebugPtr)->_padding_;
          }
          else {
            local_res10 = 0;
          }
          if (local_res10 != local_res8) {
            TVar8 = (TObjectPtr<UField>_u_0)
                    (((TObjectPtr<UField> *)&TVar8.DebugPtr[1]._padding_)->field0_0x0).DebugPtr;
            bVar2 = false;
            bVar3 = false;
            goto LAB_141fae495;
          }
        }
        if (*(int *)((longlong)&TVar8.DebugPtr[1]._padding_ + 4) * (int)TVar8.DebugPtr[1]._padding_
            == *(int *)((longlong)&pUVar6->_padding_ + 4) * (int)pUVar6->_padding_) {
          if (*(int *)((longlong)&((TObjectPtr<UStruct> *)&TVar8.DebugPtr[1]._padding_)->field0_0x0
                      + 4) == *(int *)((longlong)&(pUVar6->SuperStruct).field0_0x0 + 4)) {
            cVar4 = (**(code **)((TVar8.DebugPtr)->_padding_ + 0x1a0))(TVar8.DebugPtr,pUVar6);
            if (cVar4 == '\0') {
              TVar8 = (TObjectPtr<UField>_u_0)
                      (((TObjectPtr<UField> *)&TVar8.DebugPtr[1]._padding_)->field0_0x0).DebugPtr;
              bVar3 = false;
              bVar2 = false;
            }
            else {
              TVar8 = (TObjectPtr<UField>_u_0)
                      (((TObjectPtr<UField> *)&TVar8.DebugPtr[1]._padding_)->field0_0x0).DebugPtr;
              bVar2 = true;
              bVar3 = true;
            }
          }
          else {
            TVar8 = (TObjectPtr<UField>_u_0)
                    (((TObjectPtr<UField> *)&TVar8.DebugPtr[1]._padding_)->field0_0x0).DebugPtr;
            bVar2 = false;
            bVar3 = false;
          }
        }
        else {
          TVar8 = (TObjectPtr<UField>_u_0)
                  (((TObjectPtr<UField> *)&TVar8.DebugPtr[1]._padding_)->field0_0x0).DebugPtr;
          bVar2 = false;
          bVar3 = false;
        }
      }
LAB_141fae495:
      pUVar7 = pUVar9;
      if (pUVar6 != (UStruct *)0x0) {
        pUVar7 = (UStruct *)(pUVar6->Children).field0_0x0.DebugPtr;
      }
      pUVar6 = pUVar7;
    } while (bVar2);
  }
  return bVar3;
}

