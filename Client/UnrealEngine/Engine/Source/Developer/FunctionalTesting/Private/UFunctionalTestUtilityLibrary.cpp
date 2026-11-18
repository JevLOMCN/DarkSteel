// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 8

// StaticClass @ 148c73840

UClass * __cdecl UFunctionalTestUtilityLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestUtilityLibrary",
               &Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton,
               StaticRegisterNativesUFunctionalTestUtilityLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFunctionalTestUtilityLibrary>,
               InternalVTableHelperCtorCaller<UFunctionalTestUtilityLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton;
}

// UFunctionalTestUtilityLibrary @ 148c80220

UFunctionalTestUtilityLibrary * __thiscall
UFunctionalTestUtilityLibrary::UFunctionalTestUtilityLibrary
          (UFunctionalTestUtilityLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UFunctionalTestUtilityLibrary__6B_;
  return this;
}

// UFunctionalTestUtilityLibrary @ 148c80250

UFunctionalTestUtilityLibrary * __thiscall
UFunctionalTestUtilityLibrary::UFunctionalTestUtilityLibrary
          (UFunctionalTestUtilityLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UFunctionalTestUtilityLibrary__6B_;
  return this;
}

// ~UFunctionalTestUtilityLibrary @ 148c81250

void __thiscall
UFunctionalTestUtilityLibrary::~UFunctionalTestUtilityLibrary(UFunctionalTestUtilityLibrary *this)

{
  *(undefined ***)this = &___7UFunctionalTestUtilityLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 148c91ae0

UClass * __cdecl UFunctionalTestUtilityLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestUtilityLibrary",
               &Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton,
               StaticRegisterNativesUFunctionalTestUtilityLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFunctionalTestUtilityLibrary>,
               InternalVTableHelperCtorCaller<UFunctionalTestUtilityLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton;
}

// StaticRegisterNativesUFunctionalTestUtilityLibrary @ 148c9d4f0

void __cdecl UFunctionalTestUtilityLibrary::StaticRegisterNativesUFunctionalTestUtilityLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TraceChannelTestUtil @ 148c9f580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTraceQueryTestResults * __cdecl
UFunctionalTestUtilityLibrary::TraceChannelTestUtil
          (UObject *param_1,FTraceChannelTestBatchOptions *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6,TVector<double> *param_7,
          TRotator<double> *param_8,ETraceTypeQuery param_9,
          TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> *param_10,FName param_11
          ,bool param_12,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_13,bool param_14,
          Type param_15,FLinearColor *param_16,FLinearColor *param_17,float param_18)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UTraceQueryTestResults *this;
  longlong *plVar7;
  undefined1 auStackY_248 [32];
  FLinearColor_u_0 local_1b8;
  FLinearColor_u_0 local_1a8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> *local_158;
  TRotator<double> *local_150;
  TVector<double> *local_148;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  undefined1 local_f8 [128];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_158 = param_10;
  local_148 = param_7;
  local_150 = param_8;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UTraceQueryTestResults::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar6);
  local_f8._8_8_ = pUVar5;
  this = (UTraceQueryTestResults *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    plVar7 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if (this != (UTraceQueryTestResults *)0x0) {
    bVar4 = param_2->bSphereTrace;
    bVar2 = param_2->bCapsuleTrace;
    bVar3 = param_2->bBoxTrace;
    (this->BatchOptions).bLineTrace = param_2->bLineTrace;
    (this->BatchOptions).bSphereTrace = bVar4;
    (this->BatchOptions).bCapsuleTrace = bVar2;
    (this->BatchOptions).bBoxTrace = bVar3;
    bVar4 = param_2->bObjectsTrace;
    (this->BatchOptions).bChannelTrace = param_2->bChannelTrace;
    (this->BatchOptions).bObjectsTrace = bVar4;
    (this->BatchOptions).bProfileTrace = param_2->bProfileTrace;
    if (param_2->bLineTrace != false) {
      if (param_2->bChannelTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_198._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_178._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::LineTraceSingle
                          (param_1,(TVector<double> *)&local_178._s_0,
                           (TVector<double> *)&local_198._s_0,param_9,param_12,param_13,param_15,
                           (FHitResult *)&this->ChannelResults,param_14,
                           (FLinearColor *)&local_1a8._s_0,(FLinearColor *)&local_1b8._s_0,param_18)
        ;
        (this->ChannelResults).LineResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::LineTraceMulti
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_9,param_12,param_13,param_15,
                           &(this->ChannelResults).LineResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ChannelResults).LineResults.bMultiResult = bVar4;
      }
      if (param_2->bObjectsTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::LineTraceSingleForObjects
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,local_158,param_12,param_13,param_15,
                           (FHitResult *)&this->ObjectResults,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ObjectResults).LineResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::LineTraceMultiForObjects
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,local_158,param_12,param_13,param_15,
                           &(this->ObjectResults).LineResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ObjectResults).LineResults.bMultiResult = bVar4;
      }
      if (param_2->bProfileTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::LineTraceSingleByProfile
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_11,param_12,param_13,param_15,
                           (FHitResult *)&this->ProfileResults,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ProfileResults).LineResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::LineTraceMultiByProfile
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_11,param_12,param_13,param_15,
                           &(this->ProfileResults).LineResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ProfileResults).LineResults.bMultiResult = bVar4;
      }
    }
    if (param_2->bSphereTrace != false) {
      if (param_2->bChannelTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::SphereTraceSingle
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_9,param_12,param_13,
                           param_15,&(this->ChannelResults).SphereResults.SingleHit,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ChannelResults).SphereResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::SphereTraceMulti
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_9,param_12,param_13,
                           param_15,&(this->ChannelResults).SphereResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ChannelResults).SphereResults.bMultiResult = bVar4;
      }
      if (param_2->bObjectsTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::SphereTraceSingleForObjects
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,local_158,param_12,param_13,
                           param_15,&(this->ObjectResults).SphereResults.SingleHit,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ObjectResults).SphereResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::SphereTraceMultiForObjects
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,local_158,param_12,param_13,
                           param_15,&(this->ObjectResults).SphereResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ObjectResults).SphereResults.bMultiResult = bVar4;
      }
      if (param_2->bProfileTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::SphereTraceSingleByProfile
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_11,param_12,param_13,
                           param_15,&(this->ProfileResults).SphereResults.SingleHit,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ProfileResults).SphereResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::SphereTraceMultiByProfile
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_11,param_12,param_13,
                           param_15,&(this->ProfileResults).SphereResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ProfileResults).SphereResults.bMultiResult = bVar4;
      }
    }
    if (param_2->bCapsuleTrace != false) {
      if (param_2->bChannelTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::CapsuleTraceSingle
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_6,param_9,param_12,
                           param_13,param_15,&(this->ChannelResults).CapsuleResults.SingleHit,
                           param_14,(FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,
                           param_18);
        (this->ChannelResults).CapsuleResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::CapsuleTraceMulti
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_6,param_9,param_12,
                           param_13,param_15,&(this->ChannelResults).CapsuleResults.MultiHits,
                           param_14,(FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,
                           param_18);
        (this->ChannelResults).CapsuleResults.bMultiResult = bVar4;
      }
      if (param_2->bObjectsTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::CapsuleTraceSingleForObjects
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_6,local_158,param_12,
                           param_13,param_15,&(this->ObjectResults).CapsuleResults.SingleHit,
                           param_14,(FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,
                           param_18);
        (this->ObjectResults).CapsuleResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::CapsuleTraceMultiForObjects
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_6,local_158,param_12,
                           param_13,param_15,&(this->ObjectResults).CapsuleResults.MultiHits,
                           param_14,(FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,
                           param_18);
        (this->ObjectResults).CapsuleResults.bMultiResult = bVar4;
      }
      if (param_2->bProfileTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::CapsuleTraceSingleByProfile
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_6,param_11,param_12,
                           param_13,param_15,&(this->ProfileResults).CapsuleResults.SingleHit,
                           param_14,(FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,
                           param_18);
        (this->ProfileResults).CapsuleResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::CapsuleTraceMultiByProfile
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,param_5,param_6,param_11,param_12,
                           param_13,param_15,&(this->ProfileResults).CapsuleResults.MultiHits,
                           param_14,(FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,
                           param_18);
        (this->ProfileResults).CapsuleResults.bMultiResult = bVar4;
      }
    }
    if (param_2->bBoxTrace != false) {
      if (param_2->bChannelTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_178._s_0.X = local_150->Pitch;
        local_178._s_0.Y = local_150->Yaw;
        local_178._s_0.Z = local_150->Roll;
        local_198._s_0.X = (local_148->field0_0x0)._s_0.X;
        local_198._s_0.Y = (local_148->field0_0x0)._s_0.Y;
        local_198._s_0.Z = (local_148->field0_0x0)._s_0.Z;
        local_138._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_138._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_138._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_118._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_118._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_118._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::BoxTraceSingle
                          (param_1,(TVector<double> *)&local_118._s_0,
                           (TVector<double> *)&local_138._s_0,(TVector<double> *)&local_198._s_0,
                           (TRotator<double> *)&local_178._s_0,param_9,param_12,param_13,param_15,
                           &(this->ChannelResults).BoxResults.SingleHit,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ChannelResults).BoxResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_118._s_0.X = local_150->Pitch;
        local_118._s_0.Y = local_150->Yaw;
        local_118._s_0.Z = local_150->Roll;
        local_138._s_0.X = (local_148->field0_0x0)._s_0.X;
        local_138._s_0.Y = (local_148->field0_0x0)._s_0.Y;
        local_138._s_0.Z = (local_148->field0_0x0)._s_0.Z;
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::BoxTraceMulti
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,(TVector<double> *)&local_138._s_0,
                           (TRotator<double> *)&local_118._s_0,param_9,param_12,param_13,param_15,
                           &(this->ChannelResults).BoxResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ChannelResults).BoxResults.bMultiResult = bVar4;
      }
      if (param_2->bObjectsTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_118._s_0.X = local_150->Pitch;
        local_118._s_0.Y = local_150->Yaw;
        local_118._s_0.Z = local_150->Roll;
        local_138._s_0.X = (local_148->field0_0x0)._s_0.X;
        local_138._s_0.Y = (local_148->field0_0x0)._s_0.Y;
        local_138._s_0.Z = (local_148->field0_0x0)._s_0.Z;
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::BoxTraceSingleForObjects
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,(TVector<double> *)&local_138._s_0,
                           (TRotator<double> *)&local_118._s_0,local_158,param_12,param_13,param_15,
                           &(this->ObjectResults).BoxResults.SingleHit,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ObjectResults).BoxResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_118._s_0.X = local_150->Pitch;
        local_118._s_0.Y = local_150->Yaw;
        local_118._s_0.Z = local_150->Roll;
        local_138._s_0.X = (local_148->field0_0x0)._s_0.X;
        local_138._s_0.Y = (local_148->field0_0x0)._s_0.Y;
        local_138._s_0.Z = (local_148->field0_0x0)._s_0.Z;
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::BoxTraceMultiForObjects
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,(TVector<double> *)&local_138._s_0,
                           (TRotator<double> *)&local_118._s_0,local_158,param_12,param_13,param_15,
                           &(this->ObjectResults).BoxResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ObjectResults).BoxResults.bMultiResult = bVar4;
      }
      if (param_2->bProfileTrace != false) {
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_118._s_0.X = local_150->Pitch;
        local_118._s_0.Y = local_150->Yaw;
        local_118._s_0.Z = local_150->Roll;
        local_138._s_0.X = (local_148->field0_0x0)._s_0.X;
        local_138._s_0.Y = (local_148->field0_0x0)._s_0.Y;
        local_138._s_0.Z = (local_148->field0_0x0)._s_0.Z;
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::BoxTraceSingleByProfile
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,(TVector<double> *)&local_138._s_0,
                           (TRotator<double> *)&local_118._s_0,param_11,param_12,param_13,param_15,
                           &(this->ProfileResults).BoxResults.SingleHit,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ProfileResults).BoxResults.bSingleResult = bVar4;
        local_1a8._0_8_ = *(undefined8 *)&param_17->field0_0x0;
        local_1a8._8_8_ = *(undefined8 *)((longlong)&param_17->field0_0x0 + 8);
        local_1b8._0_8_ = *(undefined8 *)&param_16->field0_0x0;
        local_1b8._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
        local_118._s_0.X = local_150->Pitch;
        local_118._s_0.Y = local_150->Yaw;
        local_118._s_0.Z = local_150->Roll;
        local_138._s_0.X = (local_148->field0_0x0)._s_0.X;
        local_138._s_0.Y = (local_148->field0_0x0)._s_0.Y;
        local_138._s_0.Z = (local_148->field0_0x0)._s_0.Z;
        local_178._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_178._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        bVar4 = UKismetSystemLibrary::BoxTraceMultiByProfile
                          (param_1,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_178._s_0,(TVector<double> *)&local_138._s_0,
                           (TRotator<double> *)&local_118._s_0,param_11,param_12,param_13,param_15,
                           &(this->ProfileResults).BoxResults.MultiHits,param_14,
                           (FLinearColor *)&local_1b8._s_0,(FLinearColor *)&local_1a8._s_0,param_18)
        ;
        (this->ProfileResults).BoxResults.bMultiResult = bVar4;
      }
    }
    UTraceQueryTestResults::CaptureNames(this);
  }
  pFVar1 = (local_158->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// execTraceChannelTestUtil @ 148cabb70

void __cdecl
UFunctionalTestUtilityLibrary::execTraceChannelTestUtil
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  float fVar3;
  FName FVar4;
  void *_Src;
  UTraceQueryTestResults *pUVar5;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar6;
  size_t _Size;
  bool bVar7;
  bool bVar8;
  byte local_res10 [8];
  undefined8 *local_res18;
  byte local_res20 [8];
  FTraceChannelTestBatchOptions local_1f8;
  int local_1f0;
  int local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0 [2];
  FName local_1d8;
  UObject *local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_1a8;
  FTraceChannelTestBatchOptions *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  FLinearColor_u_0 local_108;
  FLinearColor_u_0 local_f8;
  TRotator<double> local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [3];
  
  local_1d0 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_1f8.bLineTrace = true;
  local_1f8.bSphereTrace = false;
  local_1f8.bCapsuleTrace = false;
  local_1f8.bBoxTrace = false;
  local_1f8.bChannelTrace = true;
  local_1f8.bObjectsTrace = false;
  local_1f8.bProfileTrace = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_198 = &local_1f8;
  if ((FTraceChannelTestBatchOptions *)param_2->MostRecentPropertyAddress !=
      (FTraceChannelTestBatchOptions *)0x0) {
    local_198 = (FTraceChannelTestBatchOptions *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_1e0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e0);
  }
  local_1e4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e4);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  local_1f0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  bVar7 = local_1f0 != 0;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1ec = 0;
  pTVar6 = &local_1a8;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1ec,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1ec);
  }
  bVar8 = local_1ec != 0;
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_1e8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  _Src = local_1c8;
  FVar4 = local_1d8;
  fVar3 = local_1e8;
  bVar2 = local_res10[0];
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Size = (size_t)(int)local_1c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1b8.ArrayNum = (int)local_1c0;
  if ((int)local_1c0 == 0) {
    local_1b8.ArrayMax = (int)local_1c0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_1c0,0,&local_1b8.AllocatorInstance,(int)local_1c0,&local_1b8.ArrayMax)
    ;
    memcpy(local_1b8.AllocatorInstance.Data,_Src,_Size);
  }
  local_e8.Pitch = local_170;
  local_e8.Yaw = dStack_168;
  local_e8.Roll = local_160;
  local_c8._s_0.X = local_158;
  local_c8._s_0.Y = dStack_150;
  local_c8._s_0.Z = local_148;
  local_a8._s_0.X = local_140;
  local_a8._s_0.Y = dStack_138;
  local_a8._s_0.Z = local_130;
  local_108._0_8_ = local_190;
  local_108._8_8_ = uStack_188;
  local_f8._0_8_ = local_180;
  local_f8._8_8_ = uStack_178;
  local_88[0]._s_0.X = local_128;
  local_88[0]._s_0.Y = dStack_120;
  local_88[0]._s_0.Z = local_118;
  pUVar5 = TraceChannelTestUtil
                     (local_1d0,local_198,(TVector<double> *)&local_88[0]._s_0,
                      (TVector<double> *)&local_a8._s_0,local_1e0[0],local_1e4,
                      (TVector<double> *)&local_c8._s_0,&local_e8,(uint)local_res20[0],&local_1b8,
                      FVar4,bVar7,pTVar6,bVar8,(uint)bVar2,(FLinearColor *)&local_f8._s_0,
                      (FLinearColor *)&local_108._s_0,fVar3);
  *local_res18 = pUVar5;
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  return;
}

