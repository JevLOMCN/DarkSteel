// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147339810

UClass * __cdecl ATriggerSphere::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerSphere",
               &Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton,
               StaticRegisterNativesATriggerSphere,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ATriggerSphere>,
               InternalVTableHelperCtorCaller<ATriggerSphere>,local_res8,ATriggerBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton;
}

// ATriggerSphere @ 14733e2a0

ATriggerSphere * __thiscall
ATriggerSphere::ATriggerSphere(ATriggerSphere *this,FVTableHelper *param_1)

{
  ATriggerBase::ATriggerBase((ATriggerBase *)this,param_1);
  *(undefined ***)this = &___7ATriggerSphere__6B_;
  return this;
}

// ~ATriggerSphere @ 147341720

void __thiscall ATriggerSphere::~ATriggerSphere(ATriggerSphere *this)

{
  *(undefined ***)this = &___7ATriggerSphere__6B_;
  ATriggerBase::~ATriggerBase((ATriggerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14734fd30

UClass * __cdecl ATriggerSphere::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerSphere",
               &Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton,
               StaticRegisterNativesATriggerSphere,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ATriggerSphere>,
               InternalVTableHelperCtorCaller<ATriggerSphere>,local_res8,ATriggerBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton;
}

// StaticRegisterNativesATriggerSphere @ 147358870

void __cdecl ATriggerSphere::StaticRegisterNativesATriggerSphere(void)

{
  return;
}

// ATriggerSphere @ 1488addc0

ATriggerSphere * __thiscall
ATriggerSphere::ATriggerSphere(ATriggerSphere *this,FObjectInitializer *param_1)

{
  int iVar1;
  FName FVar2;
  UShapeComponent *pUVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pFVar4 = ::FName::FName(&local_res8,L"CollisionComp");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USphereComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  ATriggerBase::ATriggerBase((ATriggerBase *)this,param_1);
  pUVar3 = *(UShapeComponent **)&this->field_0x2c0;
  *(undefined ***)this = &___7ATriggerSphere__6B_;
  if (pUVar3 == (UShapeComponent *)0x0) {
    pFVar6 = GetTypeName<USphereComponent>(&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = Z_Construct_UClass_USphereComponent_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar5->_padding_)) {
    (pUVar3->ShapeColor).field0_0x0._s_0 = (FColor_u_0_s_0)TriggerBaseColor.field0_0x0;
    *(undefined4 *)&pUVar3->field_0x568 = 0x42200000;
    (**(code **)(*(longlong *)pUVar3 + 0x788))
              (pUVar3,TriggerCollisionProfileName,
               CONCAT71((int7)((ulonglong)&pUVar5->_padding_ >> 8),1));
    return this;
  }
  pFVar6 = GetTypeName<USphereComponent>(&local_28);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UShapeComponent>(&local_18,pUVar3);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

