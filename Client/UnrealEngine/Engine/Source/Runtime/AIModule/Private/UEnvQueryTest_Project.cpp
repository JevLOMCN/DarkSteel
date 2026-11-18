// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f12d30

UClass * __cdecl UEnvQueryTest_Project::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Project",
               &Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Project,0x238,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Project>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Project>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton;
}

// UEnvQueryTest_Project @ 146f2d5f0

UEnvQueryTest_Project * __thiscall
UEnvQueryTest_Project::UEnvQueryTest_Project(UEnvQueryTest_Project *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Project__6B_;
  (this->ProjectionData).NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ProjectionData).TraceChannel = '\0';
  (this->ProjectionData).SerializedChannel = '\0';
  (this->ProjectionData).VersionNum = 0;
  (this->ProjectionData).ProjectDown = 1024.0;
  (this->ProjectionData).ProjectUp = 1024.0;
  (this->ProjectionData).ExtentX = 10.0;
  (this->ProjectionData).ExtentY = 10.0;
  (this->ProjectionData).ExtentZ = 10.0;
  (this->ProjectionData).PostProjectionVerticalOffset = 0.0;
  (this->ProjectionData).TraceProfileName.ComparisonIndex = 0;
  (this->ProjectionData).TraceProfileName.Number = 0;
  (this->ProjectionData).TraceShape = '\0';
  (this->ProjectionData).TraceMode = '\0';
  puVar2 = &(this->ProjectionData).field_0x38;
  (this->ProjectionData).bTraceComplex = 0;
  (this->ProjectionData).bCanProjectDown = 0;
  (this->ProjectionData).bCanDisableTrace = 1;
  (this->ProjectionData).bCanTraceOnGeometry = 1;
  (this->ProjectionData).bCanTraceOnNavMesh = 1;
  (this->ProjectionData).bOnlyBlockingHits = 1;
  return this;
}

// UEnvQueryTest_Project @ 146f2d680

UEnvQueryTest_Project * __thiscall
UEnvQueryTest_Project::UEnvQueryTest_Project
          (UEnvQueryTest_Project *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UClass *pUVar3;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Project__6B_;
  (this->ProjectionData).NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ProjectionData).TraceChannel = '\0';
  (this->ProjectionData).SerializedChannel = '\0';
  (this->ProjectionData).VersionNum = 0;
  (this->ProjectionData).ProjectDown = 1024.0;
  (this->ProjectionData).ProjectUp = 1024.0;
  (this->ProjectionData).ExtentX = 10.0;
  (this->ProjectionData).ExtentY = 10.0;
  (this->ProjectionData).ExtentZ = 10.0;
  (this->ProjectionData).PostProjectionVerticalOffset = 0.0;
  (this->ProjectionData).TraceProfileName.ComparisonIndex = 0;
  (this->ProjectionData).TraceProfileName.Number = 0;
  (this->ProjectionData).TraceShape = '\0';
  (this->ProjectionData).TraceMode = '\0';
  puVar2 = &(this->ProjectionData).field_0x38;
  (this->ProjectionData).bTraceComplex = 0;
  (this->ProjectionData).bCanProjectDown = 0;
  (this->ProjectionData).bCanDisableTrace = 1;
  (this->ProjectionData).bCanTraceOnGeometry = 1;
  (this->ProjectionData).bCanTraceOnNavMesh = 1;
  (this->ProjectionData).bOnlyBlockingHits = 1;
  *(undefined1 *)&this->_padding_ = 1;
  pUVar3 = UEnvQueryItemType_VectorBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->_padding_ = (longlong)pUVar3;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  if (*(char *)((longlong)&this->_padding_ + 2) != '\x03') {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  }
  (this->ProjectionData).ExtentX = 0.0;
  puVar2 = &(this->ProjectionData).field_0x38;
  (this->ProjectionData).bCanDisableTrace = 0;
  (this->ProjectionData).bCanProjectDown = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  (this->ProjectionData).TraceMode.Value = '\x01';
  return this;
}

// ~UEnvQueryTest_Project @ 146f2f270

void __thiscall UEnvQueryTest_Project::~UEnvQueryTest_Project(UEnvQueryTest_Project *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Project__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GetDescriptionDetails @ 146f535f0

FText * __thiscall
UEnvQueryTest_Project::GetDescriptionDetails
          (UEnvQueryTest_Project *this,FText *__return_storage_ptr__)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"projected");
  UEnvQueryTest::DescribeBoolTestParams((UEnvQueryTest *)this,__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f59490

UClass * __cdecl UEnvQueryTest_Project::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Project",
               &Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Project,0x238,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Project>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Project>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton;
}

// RunTest @ 146f706f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEnvQueryTest_Project::RunTest(UEnvQueryTest_Project *this,FEnvQueryInstance *param_1)

{
  float fVar1;
  float fVar2;
  uchar uVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  UObject *pUVar15;
  FProperty *pFVar16;
  undefined1 *puVar17;
  UClass *pUVar18;
  UClass *pUVar19;
  ANavigationData *pAVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  longlong *plVar27;
  uint uVar28;
  ulonglong uVar29;
  UClass *pUVar30;
  UObject *pUVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  undefined1 auStackY_358 [32];
  undefined1 local_307 [7];
  ForAnyElementType local_300;
  undefined8 local_2f8;
  TArray<FNavLocation,TSizedDefaultAllocator<32>_> local_2f0;
  code *local_2e0;
  longlong *local_2d8;
  FScriptContainerElement *local_2d0;
  FItemIterator local_2c8;
  FItemIterator local_2a0;
  FItemIterator local_278;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_250;
  double local_240;
  double dStack_238;
  double local_230;
  UClass *local_228;
  LARGE_INTEGER local_220;
  LARGE_INTEGER local_218;
  LARGE_INTEGER local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1e8;
  TVector<double>_u_0 local_1d8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined4 uStack_157;
  undefined2 uStack_153;
  undefined1 uStack_151;
  FNavigationQueryFilter *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  TVector<double>_u_0 local_138;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  uint local_98;
  undefined4 uStack_94;
  ulonglong local_88;
  ulonglong uVar23;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (pUVar15 == (UObject *)0x0) {
    return;
  }
  plVar27 = (longlong *)this->_padding_;
  pUVar30 = (UClass *)0x0;
  if (plVar27 != (longlong *)0x0) {
    this->_padding_ = 0;
    (**(code **)(*plVar27 + 0x2b0))(plVar27,pUVar15);
    if ((FName)this->_padding_ != (FName)0x0) {
      pFVar16 = UStruct::FindPropertyByName
                          (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
      if ((pFVar16 == (FProperty *)0x0) ||
         (cVar8 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar16), cVar8 == '\0')) {
        local_307[0] = 0;
        bVar9 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_307);
        if (!bVar9) goto LAB_146f707b5;
      }
      this->_padding_ = (longlong)pFVar16;
    }
  }
LAB_146f707b5:
  if (((FProperty *)this->_padding_ == (FProperty *)0x0) ||
     (puVar17 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this->_padding_,(UObject *)this->_padding_,0),
     puVar17 == (undefined1 *)0x0)) {
    uVar10 = (undefined1)this->_padding_;
  }
  else {
    uVar10 = *puVar17;
  }
  lVar21 = param_1->_padding_;
  if ((lVar21 != 0) && (pUVar18 = UEnvQueryItemType::StaticClass(), pUVar18 != (UClass *)0x0)) {
    iVar13 = (int)pUVar18->_padding_;
    if ((*(int *)(lVar21 + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar18->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (lVar21 = param_1->_padding_, lVar21 != 0)) {
      pUVar19 = UEnvQueryItemType::StaticClass();
      pUVar18 = pUVar30;
      if (pUVar19 != (UClass *)0x0) {
        iVar13 = (int)pUVar19->_padding_;
        if ((*(int *)(lVar21 + 0x38) < iVar13) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar19->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar18 = (UClass *)param_1->_padding_;
        }
      }
      pUVar19 = UEnvQueryItemType_Point::StaticClass();
      if (pUVar19 != (UClass *)0x0) {
        iVar13 = (int)pUVar19->_padding_;
        if (((int)pUVar18->_padding_ < iVar13) ||
           ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar13 * 8) !=
            &pUVar19->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          lVar21 = param_1->_padding_;
          pUVar18 = pUVar30;
          if ((lVar21 != 0) &&
             (pUVar19 = UEnvQueryItemType::StaticClass(), pUVar19 != (UClass *)0x0)) {
            iVar13 = (int)pUVar19->_padding_;
            if ((*(int *)(lVar21 + 0x38) < iVar13) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar13 * 8) !=
                &pUVar19->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              pUVar18 = (UClass *)param_1->_padding_;
            }
          }
          if ((pUVar18->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar18);
          }
          pUVar31 = (pUVar18->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar18 = UEnvQueryItemType_Point::StaticClass();
          iVar13 = (int)pUVar18->_padding_;
          if (((*(int *)(*(longlong *)&pUVar31->field_0x10 + 0x38) < iVar13) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar31->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
               &pUVar18->_padding_)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret->IsA(T::StaticClass())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x1181,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          goto LAB_146f7094e;
        }
      }
    }
  }
  pUVar31 = (UObject *)0x0;
LAB_146f7094e:
  uVar3 = (this->ProjectionData).TraceMode.Value;
  if (uVar3 == '\x01') {
    pAVar20 = FEQSHelpers::FindNavigationDataForQuery(param_1);
    if (pAVar20 != (ANavigationData *)0x0) {
      local_228 = (this->ProjectionData).NavigationFilter.Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_228);
      }
      UNavigationQueryFilter::GetQueryFilter
                (&local_1e8,pAVar20,pUVar15,(TSubclassOf<UNavigationQueryFilter>)&local_228);
      uVar12 = (uint)param_1->_padding_;
      uVar32 = (ulonglong)uVar12;
      uVar24 = 0;
      local_300.Data = (FScriptContainerElement *)0x0;
      local_2f8 = 0;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar32);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,uVar12,&local_300,0,(int *)((longlong)&local_2f8 + 4));
        uVar32 = (ulonglong)(uint)param_1->_padding_;
      }
      fVar6 = __real_3f000000;
      fVar1 = (this->ProjectionData).ProjectDown;
      fVar2 = (this->ProjectionData).ProjectUp;
      if (fVar1 == fVar2) {
        local_240 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_238 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        local_120 = 0;
        uStack_118 = 0;
        local_240 = 0.0;
        dStack_238 = 0.0;
        uVar33 = (undefined8)((fVar2 - fVar1) * __real_3f000000);
        local_110 = (double)uVar33;
      }
      dVar7 = dStack_238;
      dVar5 = local_240;
      uVar23 = uVar24;
      uVar29 = uVar24;
      local_230 = (double)uVar33;
      if (0 < (int)uVar32) {
        do {
          uVar22 = (uint)uVar23;
          uVar12 = 0;
          if ((int)uVar22 < (int)uVar32) {
            uVar12 = ~uVar22 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar12 = *(uint *)(uVar29 + 4 + param_1->_padding_);
          if (((uVar12 >> 0x1e & 1) == 0) && (-1 < (int)uVar12)) {
            UEnvQueryTest::GetItemLocation
                      ((UEnvQueryTest *)this,(TVector<double> *)&local_1d8._s_0,param_1,uVar22);
            uStack_157 = 0;
            local_108 = dVar5 + local_1d8._s_0.X;
            uStack_153 = 0;
            dStack_100 = dVar7 + local_1d8._s_0.Y;
            uStack_151 = 0;
            local_98 = local_98 & 0xfffffffc | 4;
            local_158 = 0;
            local_f8 = (double)uVar33 + local_1d8._s_0.Z;
            dStack_a0 = 0.0;
            local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_c0 = 0;
            local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0;
            uStack_170 = 0;
            local_168 = 0;
            uStack_160 = 0;
            dStack_f0 = 0.0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            local_d0 = 0;
            uStack_c8 = 0;
            if ((local_300.Data <= (FScriptContainerElement *)&local_108) &&
               (((FScriptContainerElement *)&local_108 <
                 local_300.Data + (longlong)local_2f8._4_4_ * 0x78 &&
                (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)))) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = (int)local_2f8;
            if ((int)local_2f8 == local_2f8._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,&local_300,(int *)((longlong)&local_2f8 + 4));
            }
            local_2f8 = CONCAT44(local_2f8._4_4_,iVar13 + 1);
            lVar21 = (longlong)iVar13 * 0x78;
            *(double *)(local_300.Data + lVar21) = local_108;
            *(double *)(local_300.Data + lVar21 + 8) = dStack_100;
            *(double *)(local_300.Data + lVar21 + 0x10) = local_f8;
            *(double *)(local_300.Data + lVar21 + 0x10 + 8) = dStack_f0;
            *(undefined8 *)(local_300.Data + lVar21 + 0x20) = uStack_e8;
            *(undefined8 *)(local_300.Data + lVar21 + 0x20 + 8) = uStack_e0;
            *(undefined8 *)(local_300.Data + lVar21 + 0x30) = uStack_d8;
            *(undefined8 *)(local_300.Data + lVar21 + 0x30 + 8) = local_d0;
            *(undefined8 *)(local_300.Data + lVar21 + 0x40) = uStack_c8;
            *(undefined8 *)(local_300.Data + lVar21 + 0x40 + 8) = local_c0;
            *(double *)(local_300.Data + lVar21 + 0x50) = local_b8;
            *(double *)(local_300.Data + lVar21 + 0x50 + 8) = dStack_b0;
            *(double *)(local_300.Data + lVar21 + 0x60) = local_a8;
            *(double *)(local_300.Data + lVar21 + 0x60 + 8) = dStack_a0;
            *(ulonglong *)(local_300.Data + lVar21 + 0x70) = CONCAT44(uStack_94,local_98);
          }
          uVar12 = (uint)param_1->_padding_;
          uVar32 = (ulonglong)uVar12;
          uVar23 = (ulonglong)(uVar22 + 1);
          uVar29 = uVar29 + 8;
        } while ((int)(uVar22 + 1) < (int)uVar12);
      }
      local_1c0 = (double)(this->ProjectionData).ExtentX;
      pcVar4 = *(code **)(pAVar20->_padding_ + 0x890);
      local_1b0 = (double)(((this->ProjectionData).ProjectUp + (this->ProjectionData).ProjectDown) *
                          fVar6);
      local_148 = local_1e8.Object;
      pTStack_140 = local_1e8.SharedReferenceCount.ReferenceController;
      if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      dStack_1b8 = local_1c0;
      (*pcVar4)(pAVar20,&local_300,&local_1c0,&local_148);
      fVar1 = (this->ProjectionData).PostProjectionVerticalOffset;
      if (fVar1 == 0.0) {
        FEnvQueryInstance::FItemIterator::FItemIterator(&local_2c8,(UEnvQueryTest *)this,param_1,-1)
        ;
        dVar5 = __real_4170000000000000;
        uVar32 = uVar24;
        while (((dVar7 = local_2c8.Deadline, lVar21 = local_2c8._padding_,
                (int)(uint)local_2c8._padding_ < (int)*(longlong *)(local_2c8._padding_ + 8) &&
                ((*(byte *)(local_2c8._padding_ + 0x10c) & 2) == 0)) &&
               ((local_2c8.Deadline < 0.0 ||
                (QueryPerformanceCounter(&local_220),
                (double)local_220.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5 < dVar7))
               ))) {
          uVar22 = (uint)uVar24;
          uVar12 = 0;
          if ((int)uVar22 < (int)local_2f8) {
            uVar12 = ~uVar22 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar12 = *(uint *)(local_300.Data + uVar32 + 0x70);
          if (((uVar12 >> 1 & 1) != 0) && (pUVar31 != (UObject *)0x0)) {
            local_2e0 = *(code **)(*(longlong *)pUVar31 + 0x2e0);
            uVar28 = 0;
            if ((int)uVar22 < (int)local_2f8) {
              uVar28 = ~uVar22 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar25 = (longlong)(int)(uint)local_2c8._padding_;
            local_2d0 = local_300.Data + (longlong)(int)uVar22 * 0x78 + 0x50;
            uVar28 = 0;
            if ((int)(uint)local_2c8._padding_ < (int)*(longlong *)(lVar21 + 8)) {
              uVar28 = ~(uint)local_2c8._padding_ >> 0x1f;
            }
            local_2d8 = (longlong *)lVar21;
            if ((uVar28 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (*local_2e0)(pUVar31,((longlong)(*(int *)(*local_2d8 + 4 + lVar25 * 8) * 2) >> 1) +
                                 *(longlong *)(lVar21 + 0x18),local_2d0);
          }
          FEnvQueryInstance::FItemIterator::SetScore
                    (&local_2c8,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                     (uint)*(byte *)((longlong)&this->_padding_ + 2),(bool)((byte)(uVar12 >> 1) & 1)
                     ,(bool)uVar10);
          FEnvQueryInstance::FItemIterator::StoreTestResult(&local_2c8);
          if ((*(byte *)(local_2c8._padding_ + 0x10c) & 2) == 0) {
            local_2c8.ItemScore = 0.0;
            local_2c8.NumPassedForItem = 0;
            local_2c8.NumTestsForItem = 0;
            local_2c8.bForced = '\0';
            local_2c8.bPassed = '\x01';
            FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_2c8);
          }
          uVar24 = (ulonglong)(uVar22 + 1);
          uVar32 = uVar32 + 0x78;
        }
        *(uint *)(lVar21 + 0xec) = (uint)local_2c8._padding_;
      }
      else {
        FEnvQueryInstance::FItemIterator::FItemIterator(&local_278,(UEnvQueryTest *)this,param_1,-1)
        ;
        dVar5 = __real_4170000000000000;
        uVar32 = uVar24;
        while (((dVar7 = local_278.Deadline,
                (int)(uint)local_278._padding_ < (int)*(longlong *)(local_278._padding_ + 8) &&
                ((*(byte *)(local_278._padding_ + 0x10c) & 2) == 0)) &&
               ((local_278.Deadline < 0.0 ||
                (QueryPerformanceCounter(&local_218),
                (double)local_218.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5 < dVar7))
               ))) {
          uVar22 = (uint)uVar24;
          uVar28 = ~uVar22 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar22 < (int)local_2f8) {
            uVar12 = uVar28;
          }
          if (uVar12 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar12 = *(uint *)(local_300.Data + uVar32 + 0x70);
          if (((uVar12 >> 1 & 1) != 0) && (pUVar31 != (UObject *)0x0)) {
            local_2e0 = *(code **)(*(longlong *)pUVar31 + 0x2e0);
            uVar14 = 0;
            if ((int)uVar22 < (int)local_2f8) {
              uVar14 = uVar28;
            }
            iVar13 = (int)local_2f8;
            if (uVar14 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar13 = (int)local_2f8;
            }
            uVar33 = *(undefined8 *)(local_300.Data + uVar32 + 0x68);
            uVar14 = 0;
            if ((int)uVar22 < iVar13) {
              uVar14 = uVar28;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar21 = local_278._padding_;
            lVar25 = (longlong)(int)(uint)local_278._padding_;
            local_1a8 = *(undefined8 *)(local_300.Data + uVar32 + 0x50);
            uStack_1a0 = *(undefined8 *)(local_300.Data + uVar32 + 0x50 + 8);
            local_198 = (double)fVar1 + *(double *)(local_300.Data + uVar32 + 0x60);
            uVar28 = 0;
            if ((int)(uint)local_278._padding_ < (int)*(longlong *)(local_278._padding_ + 8)) {
              uVar28 = ~(uint)local_278._padding_ >> 0x1f;
            }
            local_190 = uVar33;
            if ((uVar28 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (*local_2e0)(pUVar31,((longlong)(*(int *)(*(longlong *)lVar21 + 4 + lVar25 * 8) * 2) >>
                                 1) + *(longlong *)(local_278._padding_ + 0x18),&local_1a8);
          }
          FEnvQueryInstance::FItemIterator::SetScore
                    (&local_278,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                     (uint)*(byte *)((longlong)&this->_padding_ + 2),(bool)((byte)(uVar12 >> 1) & 1)
                     ,(bool)uVar10);
          FEnvQueryInstance::FItemIterator::StoreTestResult(&local_278);
          if ((*(byte *)(local_278._padding_ + 0x10c) & 2) == 0) {
            local_278.ItemScore = 0.0;
            local_278.NumPassedForItem = 0;
            local_278.NumTestsForItem = 0;
            local_278.bForced = '\0';
            local_278.bPassed = '\x01';
            FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_278);
          }
          uVar24 = (ulonglong)(uVar22 + 1);
          uVar32 = uVar32 + 0x78;
        }
        *(uint *)(local_278._padding_ + 0xec) = (uint)local_278._padding_;
      }
      if (local_300.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
    }
  }
  else if ((byte)(uVar3 - 2) < 2) {
    uVar12 = (uint)param_1->_padding_;
    local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f0.ArrayNum = 0;
    local_2f0.ArrayMax = 0;
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (0 < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar12,&local_2f0.AllocatorInstance,0,&local_2f0.ArrayMax);
    }
    iVar13 = (int)param_1->_padding_;
    pUVar18 = pUVar30;
    pUVar19 = pUVar30;
    if (0 < iVar13) {
      do {
        uVar22 = (uint)pUVar18;
        uVar12 = 0;
        if ((int)uVar22 < iVar13) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar12 = *(uint *)((longlong)&pUVar19->_padding_ + param_1->_padding_ + 4);
        if (((uVar12 >> 0x1e & 1) == 0) && (-1 < (int)uVar12)) {
          UEnvQueryTest::GetItemLocation
                    ((UEnvQueryTest *)this,(TVector<double> *)&local_138._s_0,param_1,uVar22);
          local_1f8 = local_138._s_0.Z;
          uStack_1f0 = 0;
          local_208 = local_138._s_0.X;
          dStack_200 = local_138._s_0.Y;
          if ((local_2f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_208) &&
             (((FScriptContainerElement *)&local_208 <
               local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayMax * 0x20 &&
              (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = local_2f0.ArrayNum;
          if (local_2f0.ArrayNum == local_2f0.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_2f0.AllocatorInstance,&local_2f0.ArrayMax);
          }
          local_2f0.ArrayNum = iVar13 + 1;
          *(double *)(local_2f0.AllocatorInstance.Data + (longlong)iVar13 * 0x20) = local_208;
          *(double *)(local_2f0.AllocatorInstance.Data + (longlong)iVar13 * 0x20 + 8) = dStack_200;
          *(double *)(local_2f0.AllocatorInstance.Data + (longlong)iVar13 * 0x20 + 0x10) = local_1f8
          ;
          *(undefined8 *)(local_2f0.AllocatorInstance.Data + (longlong)iVar13 * 0x20 + 0x10 + 8) =
               uStack_1f0;
        }
        iVar13 = (int)param_1->_padding_;
        pUVar18 = (UClass *)(ulonglong)(uVar22 + 1);
        pUVar19 = (UClass *)&pUVar19->_padding_;
      } while ((int)(uVar22 + 1) < iVar13);
    }
    FEQSHelpers::RunPhysProjection
              ((param_1->World).field0_0x0.DebugPtr,&this->ProjectionData,&local_2f0,&local_250);
    FEnvQueryInstance::FItemIterator::FItemIterator(&local_2a0,(UEnvQueryTest *)this,param_1,-1);
    dVar5 = __real_4170000000000000;
    local_2d8 = (longlong *)0x0;
    while (((dVar7 = local_2a0.Deadline, lVar21 = local_2a0._padding_, plVar27 = local_2d8,
            (int)(uint)local_2a0._padding_ < (int)*(longlong *)(local_2a0._padding_ + 8) &&
            ((*(byte *)(local_2a0._padding_ + 0x10c) & 2) == 0)) &&
           ((local_2a0.Deadline < 0.0 ||
            (QueryPerformanceCounter(&local_210),
            (double)local_210.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5 < dVar7)))))
    {
      iVar13 = (int)pUVar30;
      if (((iVar13 < 0) || (local_250.ArrayNum <= iVar13)) ||
         (local_250.AllocatorInstance.Data[(longlong)plVar27] == (FScriptContainerElement)0x0)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
        if (pUVar31 != (UObject *)0x0) {
          local_2d0 = *(FScriptContainerElement **)(*(longlong *)pUVar31 + 0x2e0);
          if ((local_2f0.ArrayNum <= iVar13) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar25 = (longlong)(int)(uint)local_2a0._padding_;
          pFVar26 = local_2f0.AllocatorInstance.Data + (longlong)iVar13 * 0x20;
          uVar12 = 0;
          if ((int)(uint)local_2a0._padding_ < (int)*(longlong *)(lVar21 + 8)) {
            uVar12 = ~(uint)local_2a0._padding_ >> 0x1f;
          }
          local_2e0 = (code *)lVar21;
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*(code *)local_2d0)
                    (pUVar31,((longlong)(*(int *)(*(longlong *)local_2e0 + 4 + lVar25 * 8) * 2) >> 1
                             ) + *(longlong *)(lVar21 + 0x18),pFVar26);
          plVar27 = local_2d8;
        }
      }
      FEnvQueryInstance::FItemIterator::SetScore
                (&local_2a0,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                 (uint)*(byte *)((longlong)&this->_padding_ + 2),bVar9,(bool)uVar10);
      FEnvQueryInstance::FItemIterator::StoreTestResult(&local_2a0);
      if ((*(byte *)(local_2a0._padding_ + 0x10c) & 2) == 0) {
        local_2a0.ItemScore = 0.0;
        local_2a0.NumPassedForItem = 0;
        local_2a0.NumTestsForItem = 0;
        local_2a0.bForced = '\0';
        local_2a0.bPassed = '\x01';
        FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_2a0);
      }
      pUVar30 = (UClass *)(ulonglong)(iVar13 + 1);
      local_2d8 = (longlong *)((longlong)plVar27 + 1);
    }
    *(uint *)(lVar21 + 0xec) = (uint)local_2a0._padding_;
    if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
    if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUEnvQueryTest_Project @ 146f76f00

void __cdecl UEnvQueryTest_Project::StaticRegisterNativesUEnvQueryTest_Project(void)

{
  return;
}

