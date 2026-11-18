// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146f10110

UClass * __cdecl UEnvQueryTest_Distance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Distance",
               &Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Distance,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Distance>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Distance>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton;
}

// UEnvQueryTest_Distance @ 146f2ce10

UEnvQueryTest_Distance * __thiscall
UEnvQueryTest_Distance::UEnvQueryTest_Distance(UEnvQueryTest_Distance *this,FVTableHelper *param_1)

{
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Distance__6B_;
  (this->DistanceTo).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryTest_Distance @ 146f2ce50

UEnvQueryTest_Distance * __thiscall
UEnvQueryTest_Distance::UEnvQueryTest_Distance
          (UEnvQueryTest_Distance *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Distance__6B_;
  (this->DistanceTo).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar1 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DistanceTo).Class.field0_0x0.DebugPtr = pUVar1;
  *(undefined1 *)&this->_padding_ = 0;
  pUVar1 = UEnvQueryItemType_VectorBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  return this;
}

// ~UEnvQueryTest_Distance @ 146f2f110

void __thiscall UEnvQueryTest_Distance::~UEnvQueryTest_Distance(UEnvQueryTest_Distance *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Distance__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GetDescriptionDetails @ 146f52f40

FText * __thiscall
UEnvQueryTest_Distance::GetDescriptionDetails
          (UEnvQueryTest_Distance *this,FText *__return_storage_ptr__)

{
  UEnvQueryTest::DescribeFloatTestParams((UEnvQueryTest *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54b60

FText * __thiscall
UEnvQueryTest_Distance::GetDescriptionTitle
          (UEnvQueryTest_Distance *this,FText *__return_storage_ptr__)

{
  uchar uVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  wchar_t *pwVar5;
  UClass *pUVar6;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  uVar1 = (this->TestMode).Value;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (uVar1 == '\0') {
    pwVar5 = L"";
LAB_146f54bc1:
    ::FString::operator=(&local_48,pwVar5);
  }
  else {
    if (uVar1 == '\x01') {
      pwVar5 = L" 2D";
      goto LAB_146f54bc1;
    }
    if (uVar1 == '\x02') {
      pwVar5 = L" Z";
      goto LAB_146f54bc1;
    }
  }
  pUVar6 = (this->DistanceTo).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_146f54bef;
  }
  else if (pUVar6 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_146f54bef:
    pUVar4 = UEnvQueryContext::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar2 = (int)pUVar4->_padding_;
      if (((int)pUVar6->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_146f54c20;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_146f54c20:
  UEnvQueryTypes::GetShortTypeName(&local_18,(UObject *)pUVar6);
  FText::ToString(&local_18);
  UEnvQueryTypes::GetShortTypeName(&local_28,(UObject *)this);
  FText::ToString(&local_28);
  ::FString::PrintfImpl(&local_38,L"%s%s: to %s");
  FText::FromString(__return_storage_ptr__,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f59010

UClass * __cdecl UEnvQueryTest_Distance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Distance",
               &Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Distance,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Distance>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Distance>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton;
}

// RunTest @ 146f6bb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryTest_Distance::RunTest(UEnvQueryTest_Distance *this,FEnvQueryInstance *param_1)

{
  float fVar1;
  float fVar2;
  uchar uVar3;
  longlong *plVar4;
  UClass *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  UObject *pUVar14;
  FProperty *pFVar15;
  UClass *pUVar16;
  UClass *pUVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uchar local_398 [8];
  uchar local_390 [8];
  uchar local_388 [8];
  uchar local_380 [8];
  uchar local_378 [8];
  uchar local_370 [8];
  uchar local_368 [8];
  uchar local_360 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_358;
  UObject *local_348;
  int local_340 [2];
  uint local_338 [2];
  int local_330 [2];
  uint local_328 [2];
  int local_320 [2];
  uint local_318 [2];
  int local_310 [2];
  uint local_308 [2];
  FItemIterator local_300;
  FItemIterator local_2d8;
  FItemIterator local_2b0;
  FItemIterator local_288;
  TVector<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  UObject *local_230;
  UObject *local_228;
  LARGE_INTEGER local_220;
  UObject *local_218;
  UObject *local_210;
  LARGE_INTEGER local_208;
  UObject *local_200;
  UObject *local_1f8;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  LARGE_INTEGER local_1c0;
  UObject *local_1b8;
  UObject *local_1b0;
  LARGE_INTEGER local_1a8;
  UObject **local_1a0;
  TVector<double>_u_0 *local_198;
  int *local_190;
  uchar *local_188;
  UObject **local_180;
  FScriptContainerElement *local_178;
  uint *local_170;
  uchar *local_168;
  UObject **local_160;
  FScriptContainerElement *local_158;
  uint *local_150;
  uchar *local_148;
  UObject **local_140;
  FScriptContainerElement *local_138;
  uint *local_130;
  uchar *local_128;
  UObject **local_120;
  TVector<double>_u_0 *local_118;
  int *local_110;
  uchar *local_108;
  UObject **local_100;
  TVector<double>_u_0 *local_f8;
  int *local_f0;
  uchar *local_e8;
  UObject **local_e0;
  FScriptContainerElement *local_d8;
  uint *local_d0;
  uchar *local_c8;
  UObject **local_c0;
  TVector<double>_u_0 *local_b8;
  int *local_b0;
  uchar *local_a8;
  
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (pUVar14 == (UObject *)0x0) {
    return;
  }
  plVar4 = (longlong *)this->_padding_;
  pUVar17 = (UClass *)0x0;
  local_348 = pUVar14;
  if (plVar4 != (longlong *)0x0) {
    this->_padding_ = 0;
    (**(code **)(*plVar4 + 0x2b0))(plVar4,pUVar14);
    if ((FName)this->_padding_ != (FName)0x0) {
      pFVar15 = UStruct::FindPropertyByName
                          (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
      if ((pFVar15 == (FProperty *)0x0) ||
         (cVar10 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar15), cVar10 == '\0')) {
        local_res18[0] = 0;
        bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res18);
        if (!bVar11) goto LAB_146f6bbd7;
      }
      this->_padding_ = (longlong)pFVar15;
    }
  }
LAB_146f6bbd7:
  pUVar16 = pUVar17;
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    pUVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        ((FProperty *)this->_padding_,(UObject *)this->_padding_,0);
  }
  if (pUVar16 == (UClass *)0x0) {
    pUVar16 = (UClass *)&this->_padding_;
  }
  fVar1 = *(float *)&pUVar16->_padding_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    this->_padding_ = 0;
    (**(code **)(*plVar4 + 0x2b0))(plVar4,pUVar14);
    if ((FName)this->_padding_ != (FName)0x0) {
      pFVar15 = UStruct::FindPropertyByName
                          (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
      if ((pFVar15 == (FProperty *)0x0) ||
         (cVar10 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar15), cVar10 == '\0')) {
        local_res20[0] = 0;
        bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res20);
        if (!bVar11) goto LAB_146f6bc7e;
      }
      this->_padding_ = (longlong)pFVar15;
    }
  }
LAB_146f6bc7e:
  pUVar16 = pUVar17;
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    pUVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        ((FProperty *)this->_padding_,(UObject *)this->_padding_,0);
  }
  pUVar5 = (this->DistanceTo).Class.field0_0x0.DebugPtr;
  if (pUVar16 == (UClass *)0x0) {
    pUVar16 = (UClass *)&this->_padding_;
  }
  fVar2 = *(float *)&pUVar16->_padding_;
  local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_358.ArrayNum = 0;
  local_358.ArrayMax = 0;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar16 = UEnvQueryContext::StaticClass(), pUVar16 != (UClass *)0x0)) {
    iVar12 = (int)pUVar16->_padding_;
    if (((int)pUVar5->_padding_ < iVar12) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar12 * 8) !=
        &pUVar16->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      pUVar17 = (this->DistanceTo).Class.field0_0x0.DebugPtr;
    }
  }
  bVar11 = FEnvQueryInstance::PrepareContext(param_1,pUVar17,&local_358);
  if (bVar11) {
    uVar3 = (this->TestMode).Value;
    if (uVar3 == '\0') {
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_300,(UEnvQueryTest *)this,param_1,-1);
      dVar8 = __real_4170000000000000;
      while (((dVar9 = local_300.Deadline, iVar12 = (int)local_300._padding_,
              lVar24 = local_300._padding_, uVar20 = 0,
              (int)local_300._padding_ < *(int *)(local_300._padding_ + 8) &&
              ((*(byte *)(local_300._padding_ + 0x10c) & 2) == 0)) &&
             ((local_300.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_220),
              (double)local_220.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8 < dVar9))))
            ) {
        UEnvQueryTest::GetItemLocation
                  ((UEnvQueryTest *)this,(TVector<double> *)&local_260._s_0,param_1,iVar12);
        local_368[0] = (this->TestMode).Value;
        local_310[0] = iVar12;
        local_218 = pUVar14;
        iVar12 = _finite(local_260._s_0.X);
        if (((iVar12 == 0) || (iVar12 = _finite(local_260._s_0.Y), iVar12 == 0)) ||
           (iVar12 = _finite(local_260._s_0.Z), iVar12 == 0)) {
          local_c0 = &local_218;
          local_b8 = &local_260;
          local_b0 = local_310;
          local_a8 = local_368;
          ``anonymous_namespace'::CheckItemLocationForNaN'::__l2::<lambda_1>::operator()(&local_c0);
        }
        uVar23 = uVar20;
        if (0 < local_358.ArrayNum) {
          do {
            uVar3 = (this->TestMode).Value;
            uVar21 = (uint)uVar20;
            uVar19 = 0;
            if ((int)uVar21 < local_358.ArrayNum) {
              uVar19 = ~uVar21 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar22 = local_358.AllocatorInstance.Data + uVar23;
            local_210 = local_348;
            local_360[0] = uVar3;
            local_308[0] = uVar21;
            iVar12 = _finite(*(double *)pFVar22);
            if (((iVar12 == 0) || (iVar12 = _finite(*(double *)(pFVar22 + 8)), iVar12 == 0)) ||
               (iVar12 = _finite(*(double *)(pFVar22 + 0x10)), iVar12 == 0)) {
              local_140 = &local_210;
              local_130 = local_308;
              local_128 = local_360;
              local_138 = pFVar22;
              ``anonymous_namespace'::CheckContextLocationForNaN'::__l2::<lambda_1>::operator()
                        (&local_140);
            }
            uVar19 = 0;
            if ((int)uVar21 < local_358.ArrayNum) {
              uVar19 = ~uVar21 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            auVar27._0_8_ =
                 (*(double *)(local_358.AllocatorInstance.Data + uVar23 + 0x10) - local_260._s_0.Z)
                 * (*(double *)(local_358.AllocatorInstance.Data + uVar23 + 0x10) - local_260._s_0.Z
                   );
            auVar27._8_8_ = 0;
            auVar26._8_8_ = 0;
            auVar26._0_8_ =
                 (*(double *)(local_358.AllocatorInstance.Data + uVar23 + 8) - local_260._s_0.Y) *
                 (*(double *)(local_358.AllocatorInstance.Data + uVar23 + 8) - local_260._s_0.Y) +
                 (*(double *)(local_358.AllocatorInstance.Data + uVar23) - local_260._s_0.X) *
                 (*(double *)(local_358.AllocatorInstance.Data + uVar23) - local_260._s_0.X) +
                 auVar27._0_8_;
            auVar26 = sqrtpd(auVar27,auVar26);
            FEnvQueryInstance::FItemIterator::SetScore
                      (&local_300,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                       (uint)*(byte *)((longlong)&this->_padding_ + 2),(float)auVar26._0_8_,fVar1,
                       fVar2);
            uVar20 = (ulonglong)(uVar21 + 1);
            uVar23 = uVar23 + 0x18;
          } while ((int)(uVar21 + 1) < local_358.ArrayNum);
        }
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_300);
        pUVar14 = local_348;
        if ((*(byte *)(local_300._padding_ + 0x10c) & 2) == 0) {
          local_300.ItemScore = 0.0;
          local_300.NumPassedForItem = 0;
          local_300.NumTestsForItem = 0;
          local_300.bForced = '\0';
          local_300.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_300);
        }
      }
    }
    else if (uVar3 == '\x01') {
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_288,(UEnvQueryTest *)this,param_1,-1);
      dVar8 = __real_4170000000000000;
      while (((dVar9 = local_288.Deadline, iVar12 = (int)local_288._padding_,
              lVar24 = local_288._padding_, uVar20 = 0,
              (int)local_288._padding_ < *(int *)(local_288._padding_ + 8) &&
              ((*(byte *)(local_288._padding_ + 0x10c) & 2) == 0)) &&
             ((local_288.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_1a8),
              (double)local_1a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8 < dVar9))))
            ) {
        UEnvQueryTest::GetItemLocation
                  ((UEnvQueryTest *)this,(TVector<double> *)&local_248._s_0,param_1,iVar12);
        local_378[0] = (this->TestMode).Value;
        local_320[0] = iVar12;
        local_230 = pUVar14;
        iVar12 = _finite(local_248._s_0.X);
        if (((iVar12 == 0) || (iVar12 = _finite(local_248._s_0.Y), iVar12 == 0)) ||
           (iVar12 = _finite(local_248._s_0.Z), iVar12 == 0)) {
          local_1a0 = &local_230;
          local_198 = &local_248;
          local_190 = local_320;
          local_188 = local_378;
          ``anonymous_namespace'::CheckItemLocationForNaN'::__l2::<lambda_1>::operator()(&local_1a0)
          ;
        }
        uVar23 = uVar20;
        if (0 < local_358.ArrayNum) {
          do {
            uVar3 = (this->TestMode).Value;
            uVar21 = (uint)uVar20;
            uVar19 = 0;
            if ((int)uVar21 < local_358.ArrayNum) {
              uVar19 = ~uVar21 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar22 = local_358.AllocatorInstance.Data + uVar23;
            local_228 = local_348;
            local_370[0] = uVar3;
            local_318[0] = uVar21;
            iVar12 = _finite(*(double *)pFVar22);
            if (((iVar12 == 0) || (iVar12 = _finite(*(double *)(pFVar22 + 8)), iVar12 == 0)) ||
               (iVar12 = _finite(*(double *)(pFVar22 + 0x10)), iVar12 == 0)) {
              local_180 = &local_228;
              local_170 = local_318;
              local_168 = local_370;
              local_178 = pFVar22;
              ``anonymous_namespace'::CheckContextLocationForNaN'::__l2::<lambda_1>::operator()
                        (&local_180);
            }
            uVar19 = 0;
            if ((int)uVar21 < local_358.ArrayNum) {
              uVar19 = ~uVar21 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            auVar25._0_8_ =
                 (*(double *)(local_358.AllocatorInstance.Data + uVar23 + 8) - local_248._s_0.Y) *
                 (*(double *)(local_358.AllocatorInstance.Data + uVar23 + 8) - local_248._s_0.Y);
            auVar25._8_8_ = 0;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (*(double *)(local_358.AllocatorInstance.Data + uVar23) -
                           local_248._s_0.X) *
                           (*(double *)(local_358.AllocatorInstance.Data + uVar23) -
                           local_248._s_0.X) + auVar25._0_8_;
            auVar26 = sqrtpd(auVar25,auVar7);
            FEnvQueryInstance::FItemIterator::SetScore
                      (&local_288,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                       (uint)*(byte *)((longlong)&this->_padding_ + 2),(float)auVar26._0_8_,fVar1,
                       fVar2);
            uVar20 = (ulonglong)(uVar21 + 1);
            pUVar14 = local_348;
            uVar23 = uVar23 + 0x18;
          } while ((int)(uVar21 + 1) < local_358.ArrayNum);
        }
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_288);
        if ((*(byte *)(local_288._padding_ + 0x10c) & 2) == 0) {
          local_288.ItemScore = 0.0;
          local_288.NumPassedForItem = 0;
          local_288.NumTestsForItem = 0;
          local_288.bForced = '\0';
          local_288.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_288);
        }
      }
    }
    else if (uVar3 == '\x02') {
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_2b0,(UEnvQueryTest *)this,param_1,-1);
      dVar8 = __real_4170000000000000;
      while (((dVar9 = local_2b0.Deadline, iVar12 = (int)local_2b0._padding_,
              lVar24 = local_2b0._padding_, uVar19 = 0,
              (int)local_2b0._padding_ < *(int *)(local_2b0._padding_ + 8) &&
              ((*(byte *)(local_2b0._padding_ + 0x10c) & 2) == 0)) &&
             ((local_2b0.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_1c0),
              (double)local_1c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8 < dVar9))))
            ) {
        UEnvQueryTest::GetItemLocation
                  ((UEnvQueryTest *)this,(TVector<double> *)&local_1d8._s_0,param_1,iVar12);
        local_388[0] = (this->TestMode).Value;
        local_330[0] = iVar12;
        local_1b8 = pUVar14;
        iVar12 = _finite(local_1d8._s_0.X);
        if (((iVar12 == 0) || (iVar12 = _finite(local_1d8._s_0.Y), iVar12 == 0)) ||
           (iVar12 = _finite(local_1d8._s_0.Z), iVar12 == 0)) {
          local_100 = &local_1b8;
          local_f8 = &local_1d8;
          local_f0 = local_330;
          local_e8 = local_388;
          ``anonymous_namespace'::CheckItemLocationForNaN'::__l2::<lambda_1>::operator()(&local_100)
          ;
        }
        if (0 < local_358.ArrayNum) {
          lVar24 = 0;
          do {
            uVar3 = (this->TestMode).Value;
            uVar21 = 0;
            if ((int)uVar19 < local_358.ArrayNum) {
              uVar21 = ~uVar19 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar22 = local_358.AllocatorInstance.Data + lVar24;
            local_1b0 = local_348;
            local_380[0] = uVar3;
            local_328[0] = uVar19;
            iVar12 = _finite(*(double *)pFVar22);
            if (((iVar12 == 0) || (iVar12 = _finite(*(double *)(pFVar22 + 8)), iVar12 == 0)) ||
               (iVar12 = _finite(*(double *)(pFVar22 + 0x10)), iVar12 == 0)) {
              local_e0 = &local_1b0;
              local_d0 = local_328;
              local_c8 = local_380;
              local_d8 = pFVar22;
              ``anonymous_namespace'::CheckContextLocationForNaN'::__l2::<lambda_1>::operator()
                        (&local_e0);
            }
            uVar21 = 0;
            if ((int)uVar19 < local_358.ArrayNum) {
              uVar21 = ~uVar19 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FEnvQueryInstance::FItemIterator::SetScore
                      (&local_2b0,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                       (uint)*(byte *)((longlong)&this->_padding_ + 2),
                       (float)(*(double *)(local_358.AllocatorInstance.Data + lVar24 + 0x10) -
                              local_1d8._s_0.Z),fVar1,fVar2);
            uVar19 = uVar19 + 1;
            lVar24 = lVar24 + 0x18;
            pUVar14 = local_348;
          } while ((int)uVar19 < local_358.ArrayNum);
        }
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_2b0);
        if ((*(byte *)(local_2b0._padding_ + 0x10c) & 2) == 0) {
          local_2b0.ItemScore = 0.0;
          local_2b0.NumPassedForItem = 0;
          local_2b0.NumTestsForItem = 0;
          local_2b0.bForced = '\0';
          local_2b0.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_2b0);
        }
      }
    }
    else {
      if (uVar3 != '\x03') {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Tests\\EnvQueryTest_Distance.cpp"
                            ,0x8b,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_146f6c0ba;
      }
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_2d8,(UEnvQueryTest *)this,param_1,-1);
      uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar8 = __real_4170000000000000;
      while (((dVar9 = local_2d8.Deadline, iVar12 = (int)local_2d8._padding_,
              lVar24 = local_2d8._padding_, uVar20 = 0,
              (int)local_2d8._padding_ < *(int *)(local_2d8._padding_ + 8) &&
              ((*(byte *)(local_2d8._padding_ + 0x10c) & 2) == 0)) &&
             ((local_2d8.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_208),
              (double)local_208.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8 < dVar9))))
            ) {
        UEnvQueryTest::GetItemLocation
                  ((UEnvQueryTest *)this,(TVector<double> *)&local_1f0._s_0,param_1,iVar12);
        local_398[0] = (this->TestMode).Value;
        local_340[0] = iVar12;
        local_200 = pUVar14;
        iVar12 = _finite(local_1f0._s_0.X);
        if (((iVar12 == 0) || (iVar12 = _finite(local_1f0._s_0.Y), iVar12 == 0)) ||
           (iVar12 = _finite(local_1f0._s_0.Z), iVar12 == 0)) {
          local_120 = &local_200;
          local_118 = &local_1f0;
          local_110 = local_340;
          local_108 = local_398;
          ``anonymous_namespace'::CheckItemLocationForNaN'::__l2::<lambda_1>::operator()(&local_120)
          ;
        }
        uVar23 = uVar20;
        if (0 < local_358.ArrayNum) {
          do {
            uVar3 = (this->TestMode).Value;
            uVar18 = (uint)uVar20;
            uVar13 = 0;
            if ((int)uVar18 < local_358.ArrayNum) {
              uVar13 = ~uVar18 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar22 = local_358.AllocatorInstance.Data + uVar23;
            local_1f8 = local_348;
            local_390[0] = uVar3;
            local_338[0] = uVar18;
            iVar12 = _finite(*(double *)pFVar22);
            if (((iVar12 == 0) || (iVar12 = _finite(*(double *)(pFVar22 + 8)), iVar12 == 0)) ||
               (iVar12 = _finite(*(double *)(pFVar22 + 0x10)), iVar12 == 0)) {
              local_160 = &local_1f8;
              local_150 = local_338;
              local_148 = local_390;
              local_158 = pFVar22;
              ``anonymous_namespace'::CheckContextLocationForNaN'::__l2::<lambda_1>::operator()
                        (&local_160);
            }
            uVar13 = 0;
            if ((int)uVar18 < local_358.ArrayNum) {
              uVar13 = ~uVar18 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FEnvQueryInstance::FItemIterator::SetScore
                      (&local_2d8,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                       (uint)*(byte *)((longlong)&this->_padding_ + 2),
                       (float)(double)CONCAT44((uint)((ulonglong)
                                                      (*(double *)
                                                        (local_358.AllocatorInstance.Data +
                                                        uVar23 + 0x10) - local_1f0._s_0.Z) >> 0x20)
                                               & uVar21,SUB84(*(double *)
                                                               (local_358.AllocatorInstance.Data +
                                                               uVar23 + 0x10) - local_1f0._s_0.Z,0)
                                                        & uVar19),fVar1,fVar2);
            uVar20 = (ulonglong)(uVar18 + 1);
            pUVar14 = local_348;
            uVar23 = uVar23 + 0x18;
          } while ((int)(uVar18 + 1) < local_358.ArrayNum);
        }
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_2d8);
        if ((*(byte *)(local_2d8._padding_ + 0x10c) & 2) == 0) {
          local_2d8.ItemScore = 0.0;
          local_2d8.NumPassedForItem = 0;
          local_2d8.NumTestsForItem = 0;
          local_2d8.bForced = '\0';
          local_2d8.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_2d8);
        }
      }
    }
    *(int *)(lVar24 + 0xec) = iVar12;
  }
LAB_146f6c0ba:
  if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUEnvQueryTest_Distance @ 146f76ea0

void __cdecl UEnvQueryTest_Distance::StaticRegisterNativesUEnvQueryTest_Distance(void)

{
  return;
}

