// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148aaae60

UClass * __cdecl UWorldPartitionRuntimeCellTransformerISM::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerISM",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformerISM,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerISM>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerISM>,local_res8,
               UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 148aaaf20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLinearColor * __cdecl
`UWorldPartitionRuntimeCellTransformerISM::UWorldPartitionRuntimeCellTransformerISM'::__l5::
<lambda_1>::<lambda_invoker_cdecl>
          (FLinearColor *__return_storage_ptr__,UPrimitiveComponent *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  UClass *pUVar5;
  
  if ((param_1 != (UPrimitiveComponent *)0x0) &&
     (lVar2 = *(longlong *)&param_1->field_0xa8, lVar2 != 0)) {
    pUVar5 = AWorldPartitionAutoInstancedActor::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      uVar3 = *(undefined8 *)&param_1->field_0x18;
      uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      FLinearColor::MakeRandomSeededColor
                (__return_storage_ptr__,(int)((ulonglong)uVar3 >> 0x20) + uVar4);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// UWorldPartitionRuntimeCellTransformerISM @ 148ab5970

UWorldPartitionRuntimeCellTransformerISM * __thiscall
UWorldPartitionRuntimeCellTransformerISM::UWorldPartitionRuntimeCellTransformerISM
          (UWorldPartitionRuntimeCellTransformerISM *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 1;
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerISM__6B_;
  return this;
}

// UWorldPartitionRuntimeCellTransformerISM @ 148ab59a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UWorldPartitionRuntimeCellTransformerISM * __thiscall
UWorldPartitionRuntimeCellTransformerISM::UWorldPartitionRuntimeCellTransformerISM
          (UWorldPartitionRuntimeCellTransformerISM *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  FActorPrimitiveColorHandler *this_00;
  FText *pFVar2;
  FText *pFVar3;
  FName *pFVar4;
  undefined ***pppuVar5;
  undefined1 auStackY_f8 [32];
  FName local_b8;
  FText local_b0;
  FText local_a0;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 1;
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerISM__6B_;
  if (((*(uint *)&this->field_0x8 & 0x10) != 0) && ((*(uint *)&this->field_0x8 >> 0x1a & 1) == 0)) {
    pUVar1 = GetPrivateStaticClass();
    if (*(UClass **)&this->field_0x10 == pUVar1) {
      this_00 = FActorPrimitiveColorHandler::Get();
      pFVar2 = FText::FText(&local_a0);
      local_48 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
      local_30 = (undefined ***)0x0;
      local_40 = FActorPrimitiveColorHandler::<lambda_29>::<lambda_invoker_cdecl>;
      local_60 = (undefined ***)0x0;
      local_58[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::
                    Call;
      local_78 = &
                 ___7__TFunction_OwnedObject_P6A_AUFLinearColor__PEBVUPrimitiveComponent___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_70 = `UWorldPartitionRuntimeCellTransformerISM::
                 UWorldPartitionRuntimeCellTransformerISM'::__l5::<lambda_1>::<lambda_invoker_cdecl>
      ;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<FLinearColor_(__cdecl*)(UPrimitiveComponent_const_*),FLinearColor,UPrimitiveComponent_const_*>
                    ::Call;
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_b0,L"WorldPartition",L"CellTransformerISM",L"Cell Transformer ISM")
      ;
      pFVar4 = ::FName::FName(&local_b8,L"CellTransformerISM");
      FActorPrimitiveColorHandler::RegisterPrimitiveColorHandler
                (this_00,*pFVar4,pFVar3,false,
                 (TFunction<FLinearColor___cdecl(UPrimitiveComponent_const_*)> *)local_88,
                 (TFunction<void___cdecl(void)> *)local_58,pFVar2);
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      if (local_58[0] != (code *)0x0) {
        pppuVar5 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
    }
  }
  return this;
}

// ~UWorldPartitionRuntimeCellTransformerISM @ 148ab7620

void __thiscall
UWorldPartitionRuntimeCellTransformerISM::~UWorldPartitionRuntimeCellTransformerISM
          (UWorldPartitionRuntimeCellTransformerISM *this)

{
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148acf920

UClass * __cdecl UWorldPartitionRuntimeCellTransformerISM::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerISM",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformerISM,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerISM>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerISM>,local_res8,
               UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionRuntimeCellTransformerISM @ 148adb8e0

void __cdecl
UWorldPartitionRuntimeCellTransformerISM::
StaticRegisterNativesUWorldPartitionRuntimeCellTransformerISM(void)

{
  return;
}

