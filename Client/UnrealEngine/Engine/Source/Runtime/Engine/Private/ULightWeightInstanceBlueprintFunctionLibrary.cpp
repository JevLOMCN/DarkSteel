// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147e8ce40

UClass * __cdecl ULightWeightInstanceBlueprintFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.
                InnerSingleton,StaticRegisterNativesULightWeightInstanceBlueprintFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightWeightInstanceBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<ULightWeightInstanceBlueprintFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.InnerSingleton;
}

// ULightWeightInstanceBlueprintFunctionLibrary @ 147ea6e60

ULightWeightInstanceBlueprintFunctionLibrary * __thiscall
ULightWeightInstanceBlueprintFunctionLibrary::ULightWeightInstanceBlueprintFunctionLibrary
          (ULightWeightInstanceBlueprintFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULightWeightInstanceBlueprintFunctionLibrary__6B_;
  return this;
}

// ULightWeightInstanceBlueprintFunctionLibrary @ 147ea6e90

ULightWeightInstanceBlueprintFunctionLibrary * __thiscall
ULightWeightInstanceBlueprintFunctionLibrary::ULightWeightInstanceBlueprintFunctionLibrary
          (ULightWeightInstanceBlueprintFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULightWeightInstanceBlueprintFunctionLibrary__6B_;
  return this;
}

// ~ULightWeightInstanceBlueprintFunctionLibrary @ 147ea9640

void __thiscall
ULightWeightInstanceBlueprintFunctionLibrary::~ULightWeightInstanceBlueprintFunctionLibrary
          (ULightWeightInstanceBlueprintFunctionLibrary *this)

{
  *(undefined ***)this = &___7ULightWeightInstanceBlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertActorToLightWeightInstance @ 147eb4f90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorInstanceHandle * __cdecl
ULightWeightInstanceBlueprintFunctionLibrary::ConvertActorToLightWeightInstance
          (FActorInstanceHandle *__return_storage_ptr__,AActor *param_1)

{
  USceneComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FActorInstanceHandle *pFVar4;
  FLightWeightInstanceSubsystem *this;
  UWorld *pUVar5;
  ALightWeightInstanceManager *this_00;
  TVector<double>_u_0 local_28;
  
  if (param_1 == (AActor *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2923060733413425172>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceBlueprintFunctionLibrary.cpp"
                       ,0x14,"InActor");
    if (!bVar3) {
      *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
      __return_storage_ptr__->field_0x1f = 0;
      (__return_storage_ptr__->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
      (__return_storage_ptr__->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
      (__return_storage_ptr__->ManagerInterface).InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      __return_storage_ptr__->InstanceIndex = -1;
      __return_storage_ptr__->ResolutionStatus = Invalid;
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar4 = (FActorInstanceHandle *)(*pcVar2)();
    return pFVar4;
  }
  this = FLightWeightInstanceSubsystem::Get();
  pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
  local_28._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_28._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_28._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_28._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar1 != (USceneComponent *)0x0) {
    local_28._0_4_ = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
    local_28._4_4_ =
         *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    local_28._8_4_ = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    local_28._12_4_ =
         *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    local_28._s_0.Z = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  }
  pUVar5 = AActor::GetWorld(param_1);
  this_00 = FLightWeightInstanceSubsystem::FindOrAddLightWeightInstanceManager
                      (this,(UClass *)param_1->_padding_,pUVar5,(TVector<double> *)&local_28._s_0,
                       (UDataLayerInstance *)0x0);
  if (this_00 == (ALightWeightInstanceManager *)0x0) {
    FActorInstanceHandle::FActorInstanceHandle(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  ALightWeightInstanceManager::ConvertActorToLightWeightInstance
            (this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateNewLightWeightInstance @ 147eb6650

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

FActorInstanceHandle * __cdecl
ULightWeightInstanceBlueprintFunctionLibrary::CreateNewLightWeightInstance
          (FActorInstanceHandle *__return_storage_ptr__,UClass *param_1,TTransform<double> *param_2,
          UDataLayerInstance *param_3,UWorld *param_4)

{
  int iVar1;
  int iVar2;
  FLightWeightInstanceSubsystem *this;
  ALightWeightInstanceManager *this_00;
  UClass *pUVar3;
  undefined1 auStackY_118 [32];
  FWeakObjectPtr local_e8;
  IActorInstanceManagerInterface *pIStack_e0;
  ALightWeightInstanceManager *local_d8 [2];
  TWeakInterfacePtr<IActorInstanceManagerInterface> local_c8;
  TVector<double>_u_0 local_b8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_98 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_2->Rotation).XY.m128d_f64[1];
  local_88 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_2->Rotation).ZW.m128d_f64[1];
  local_78 = (param_2->Translation).XY.m128d_f64[0];
  dStack_70 = (param_2->Translation).XY.m128d_f64[1];
  local_68 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_2->Translation).ZW.m128d_f64[1];
  local_58 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_2->Scale3D).XY.m128d_f64[1];
  local_48 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_2->Scale3D).ZW.m128d_f64[1];
  this = FLightWeightInstanceSubsystem::Get();
  local_b8._s_0.Z = local_68;
  local_b8._s_0.X = local_78;
  local_b8._s_0.Y = dStack_70;
  this_00 = FLightWeightInstanceSubsystem::FindOrAddLightWeightInstanceManager
                      (this,param_1,param_4,(TVector<double> *)&local_b8._s_0,param_3);
  if (this_00 == (ALightWeightInstanceManager *)0x0) {
    *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
    __return_storage_ptr__->field_0x1f = 0;
    (__return_storage_ptr__->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
    (__return_storage_ptr__->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    (__return_storage_ptr__->ManagerInterface).InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    __return_storage_ptr__->InstanceIndex = -1;
    __return_storage_ptr__->ResolutionStatus = Invalid;
  }
  else {
    if ((this_00->FreeIndices).ArrayNum < 1) {
      iVar2 = (this_00->ValidIndices).ArrayNum;
    }
    else {
      iVar1 = (this_00->FreeIndices).ArrayNum;
      iVar2 = *(int *)((this_00->FreeIndices).AllocatorInstance.Data + (longlong)iVar1 * 4 + -4);
      (this_00->FreeIndices).ArrayNum = iVar1 + -1;
    }
    (**(code **)(this_00->_padding_ + 0x770))(this_00,&local_98,iVar2);
    iVar2 = (**(code **)(this_00->_padding_ + 0x7a8))(this_00,iVar2);
    local_e8.ObjectIndex = 0;
    local_e8.ObjectSerialNumber = 0;
    pUVar3 = Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
    pIStack_e0 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
    if (pIStack_e0 != (IActorInstanceManagerInterface *)0x0) {
      local_d8[0] = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)local_d8);
    }
    local_c8.ObjectInstance.WeakPtr = local_e8;
    local_c8.InterfaceInstance = pIStack_e0;
    FActorInstanceHandle::FActorInstanceHandle(__return_storage_ptr__,&local_c8,iVar2);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147ec43e0

UClass * __cdecl ULightWeightInstanceBlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.
                InnerSingleton,StaticRegisterNativesULightWeightInstanceBlueprintFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightWeightInstanceBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<ULightWeightInstanceBlueprintFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesULightWeightInstanceBlueprintFunctionLibrary @ 147edf110

void __cdecl
ULightWeightInstanceBlueprintFunctionLibrary::
StaticRegisterNativesULightWeightInstanceBlueprintFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertActorToLightWeightInstance @ 147ee7990

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ULightWeightInstanceBlueprintFunctionLibrary::execConvertActorToLightWeightInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FProperty *pFVar5;
  USceneComponent *pUVar6;
  AActor *pAVar7;
  code *pcVar8;
  FWeakObjectPtr FVar9;
  AActor *this;
  void *pvVar10;
  TMap<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
  *pTVar11;
  bool bVar12;
  FLightWeightInstanceSubsystem *this_00;
  UWorld *pUVar13;
  ALightWeightInstanceManager *pAVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 local_res10 [8];
  FWeakObjectPtr *local_res18;
  int local_res20;
  AActor *local_f8;
  void *local_f0;
  FActorInstanceHandle local_e8;
  TMap<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<int,TObjectPtr<AActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<AActor>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TVector<double>_u_0 local_68;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  
  iVar16 = 0;
  local_f8 = (AActor *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  this = local_f8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f8 == (AActor *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2923060733413425172>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceBlueprintFunctionLibrary.cpp"
                        ,0x14,"InActor");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_e8._29_2_ = 0;
    local_e8.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_e8.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_e8.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_e8.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_e8._31_1_ = 0;
    local_e8.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
    local_e8.InstanceIndex = -1;
    local_e8.ResolutionStatus = Invalid;
  }
  else {
    this_00 = FLightWeightInstanceSubsystem::Get();
    pUVar6 = (this->RootComponent).field0_0x0.DebugPtr;
    local_68._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_68._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_68._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_68._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pUVar6 != (USceneComponent *)0x0) {
      local_40 = (pUVar6->ComponentToWorld).Translation.ZW.m128d_f64[0];
      local_50 = *(undefined4 *)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64;
      uStack_4c = *(undefined4 *)((longlong)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 4)
      ;
      uStack_48 = *(undefined4 *)((pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uStack_44 = *(undefined4 *)
                   ((longlong)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      local_68._0_4_ = local_50;
      local_68._4_4_ = uStack_4c;
      local_68._8_4_ = uStack_48;
      local_68._12_4_ = uStack_44;
      local_68._s_0.Z = local_40;
    }
    pUVar13 = AActor::GetWorld(this);
    pAVar14 = FLightWeightInstanceSubsystem::FindOrAddLightWeightInstanceManager
                        (this_00,(UClass *)this->_padding_,pUVar13,(TVector<double> *)&local_68._s_0
                         ,(UDataLayerInstance *)0x0);
    if ((pAVar14 == (ALightWeightInstanceManager *)0x0) ||
       (local_f0 = (void *)(**(code **)(pAVar14->_padding_ + 2000))(pAVar14),
       local_f0 == (void *)0x0)) {
      FActorInstanceHandle::FActorInstanceHandle(&local_e8,this);
    }
    else {
      (**(code **)(pAVar14->_padding_ + 0x7d8))(pAVar14,local_f0,this);
      puVar1 = &(pAVar14->Actors).field_0x10;
      uStack_bc = 1;
      iVar3 = *(int *)&(pAVar14->Actors).field_0x28;
      local_c8 = &pAVar14->Actors;
      local_a8 = 0;
      iStack_ac = iVar16;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&(pAVar14->Actors).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)puVar1;
        }
        uVar20 = *puVar19;
        local_a8 = 0;
        iVar16 = 0;
        while (uVar20 == 0) {
          lVar15 = (longlong)iVar16;
          local_a8 = local_a8 + 0x20;
          iVar16 = iVar16 + 1;
          iStack_ac = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_147ee7b9e;
          uVar20 = puVar19[lVar15 + 1];
        }
        uStack_bc = -uVar20 & uVar20;
        uVar2 = (ulonglong)uStack_bc * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res20 = (int)lVar15;
        iStack_ac = local_res20 + -1 + local_a8;
        if (iVar3 < iStack_ac) {
          iStack_ac = iVar3;
        }
      }
LAB_147ee7b9e:
      uVar20 = *(uint *)&(pAVar14->Actors).field_0x28;
      TStack_90._padding_ = CONCAT44(uStack_bc,iVar16);
      uVar21 = uVar20 & 0xffffffe0;
      iStack_a0 = *(int *)&(pAVar14->Actors).field_0x8 - *(int *)&(pAVar14->Actors).field_0x34;
      uStack_b0 = 0xffffffff;
      TStack_90.CurrentBitIndex = iStack_ac;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar20 >> 5;
      TStack_90._28_4_ = iStack_ac;
      TStack_90.BaseBitIndex = local_a8;
      uStack_70 = CONCAT44(uStack_9c,iStack_a0);
      iStack_c0 = iVar16;
      local_b8 = puVar1;
      iStack_a4 = iStack_ac;
      local_98 = local_c8;
      TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)&(pAVar14->Actors).field_0x28;
      if (uVar20 != uVar4) {
        puVar18 = *(undefined1 **)&(pAVar14->Actors).field_0x20;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = puVar1;
        }
        uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
        while (uVar20 == 0) {
          lVar15 = (longlong)iVar17;
          uVar21 = uVar21 + 0x20;
          iVar17 = iVar17 + 1;
          uVar20 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_147ee7cae;
          uVar20 = *(uint *)(puVar18 + lVar15 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar20 = (int)lVar15 + -1 + uVar21;
        if ((int)uVar4 < (int)uVar20) {
          uVar20 = uVar4;
        }
      }
LAB_147ee7cae:
      while( true ) {
        pTVar11 = local_98;
        if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
          `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        pvVar10 = local_f0;
        if (((TStack_90.CurrentBitIndex == uVar20) &&
            (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar11 == &pAVar14->Actors)) goto LAB_147ee7d2a;
        lVar15 = *(longlong *)pTVar11;
        pAVar7 = *(AActor **)(lVar15 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18);
        if (pAVar7 == (AActor *)0x0) {
          bVar12 = this == (AActor *)0x0;
        }
        else {
          bVar12 = pAVar7 == this;
        }
        if (bVar12) break;
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
      iVar16 = *(int *)(lVar15 + (longlong)TStack_90.CurrentBitIndex * 0x18);
      if (iVar16 == -1) {
LAB_147ee7d2a:
        if ((pAVar14->FreeIndices).ArrayNum < 1) {
          iVar16 = (pAVar14->ValidIndices).ArrayNum;
        }
        else {
          iVar3 = (pAVar14->FreeIndices).ArrayNum;
          iVar16 = *(int *)((pAVar14->FreeIndices).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4
                           );
          (pAVar14->FreeIndices).ArrayNum = iVar3 + -1;
        }
        (**(code **)(pAVar14->_padding_ + 0x770))(pAVar14,local_f0,iVar16);
        iVar16 = (**(code **)(pAVar14->_padding_ + 0x7a8))(pAVar14);
      }
      else {
        (**(code **)(pAVar14->_padding_ + 0x7c8))(pAVar14,local_f0,iVar16);
      }
      AActor::Destroy(this,false,true);
      ::operator_delete(pvVar10,0x60);
      FActorInstanceHandle::MakeDehydratedActorHandle(&local_e8,(UObject *)pAVar14,iVar16);
      param_3 = local_res18;
    }
  }
  *(FWeakObjectPtr *)param_3 = local_e8.ReferenceObject.WeakPtr;
  *(FWeakObjectPtr *)((longlong)param_3 + 8) = local_e8.ManagerInterface.ObjectInstance.WeakPtr;
  FVar9.ObjectSerialNumber._0_1_ = local_e8.ResolutionStatus;
  FVar9.ObjectIndex = local_e8.InstanceIndex;
  FVar9.ObjectSerialNumber._1_2_ = local_e8._29_2_;
  FVar9.ObjectSerialNumber._3_1_ = local_e8._31_1_;
  *(IActorInstanceManagerInterface **)((longlong)param_3 + 0x10) =
       local_e8.ManagerInterface.InterfaceInstance;
  *(FWeakObjectPtr *)((longlong)param_3 + 0x18) = FVar9;
  return;
}

// execCreateNewLightWeightInstance @ 147ee7e10

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

void __cdecl
ULightWeightInstanceBlueprintFunctionLibrary::execCreateNewLightWeightInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *pUVar2;
  UDataLayerInstance *pUVar3;
  int iVar4;
  FLightWeightInstanceSubsystem *this;
  UClass *pUVar5;
  undefined1 auStackY_198 [32];
  UWorld *local_168;
  UDataLayerInstance *local_160;
  UClass *local_158 [2];
  TVector<double>_u_0 local_148;
  TWeakInterfacePtr<IActorInstanceManagerInterface> local_128;
  FActorInstanceHandle local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158[0] = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_160 = (UDataLayerInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_168 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pUVar5 = local_158[0];
  pUVar3 = local_160;
  pUVar2 = local_168;
  local_98 = local_f8;
  dStack_90 = dStack_f0;
  local_88 = local_e8;
  dStack_80 = dStack_e0;
  local_78 = (double)local_d8._0_8_;
  dStack_70 = (double)local_d8._8_8_;
  local_68 = local_c8;
  dStack_60 = dStack_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_b8._0_8_;
  uStack_50 = local_b8._8_8_;
  local_48 = local_a8;
  dStack_40 = dStack_a0;
  this = FLightWeightInstanceSubsystem::Get();
  local_148._s_0.Z = local_68;
  local_148._s_0.X = local_78;
  local_148._s_0.Y = dStack_70;
  local_128.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)
       FLightWeightInstanceSubsystem::FindOrAddLightWeightInstanceManager
                 (this,pUVar5,pUVar2,(TVector<double> *)&local_148._s_0,pUVar3);
  if (local_128.ObjectInstance.WeakPtr == (FWeakObjectPtr)0x0) {
    local_118._29_2_ = 0;
    local_118.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_118.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_118.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_118.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_118._31_1_ = 0;
    local_118.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
    local_118.InstanceIndex = -1;
    local_118.ResolutionStatus = Invalid;
  }
  else {
    if (*(int *)((longlong)local_128.ObjectInstance.WeakPtr + 0x360) < 1) {
      iVar4 = *(int *)((longlong)local_128.ObjectInstance.WeakPtr + 0x370);
    }
    else {
      iVar4 = *(int *)((((TArray<int,TSizedDefaultAllocator<32>_> *)
                        ((longlong)local_128.ObjectInstance.WeakPtr + 0x358))->AllocatorInstance).
                       Data + (longlong)*(int *)((longlong)local_128.ObjectInstance.WeakPtr + 0x360)
                              * 4 + -4);
      *(int *)((longlong)local_128.ObjectInstance.WeakPtr + 0x360) =
           *(int *)((longlong)local_128.ObjectInstance.WeakPtr + 0x360) + -1;
    }
    (**(code **)(*(longlong *)local_128.ObjectInstance.WeakPtr + 0x770))
              (local_128.ObjectInstance.WeakPtr,&local_98,iVar4);
    iVar4 = (**(code **)(*(longlong *)local_128.ObjectInstance.WeakPtr + 0x7a8))
                      (local_128.ObjectInstance.WeakPtr,iVar4);
    local_148._s_0.X = 0.0;
    pUVar5 = Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
    local_148._s_0.Y =
         (double)UObjectBaseUtility::GetInterfaceAddress
                           ((UObjectBaseUtility *)local_128.ObjectInstance.WeakPtr,pUVar5);
    if ((void *)local_148._s_0.Y != (void *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_128.ObjectInstance.WeakPtr);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_148._s_0,(FObjectPtr)&local_128);
    }
    local_128.ObjectInstance.WeakPtr = (FWeakObjectPtr)local_148._s_0.X;
    local_128.InterfaceInstance = (IActorInstanceManagerInterface *)local_148._s_0.Y;
    FActorInstanceHandle::FActorInstanceHandle(&local_118,&local_128,iVar4);
  }
  *(FWeakObjectPtr *)param_3 = local_118.ReferenceObject.WeakPtr;
  *(FWeakObjectPtr *)((longlong)param_3 + 8) = local_118.ManagerInterface.ObjectInstance.WeakPtr;
  *(IActorInstanceManagerInterface **)((longlong)param_3 + 0x10) =
       local_118.ManagerInterface.InterfaceInstance;
  *(ulonglong *)((longlong)param_3 + 0x18) =
       CONCAT17(local_118._31_1_,
                CONCAT25(local_118._29_2_,
                         CONCAT14(local_118.ResolutionStatus,local_118.InstanceIndex)));
  return;
}

