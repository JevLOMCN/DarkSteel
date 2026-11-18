// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1473393a0

UClass * __cdecl ATriggerBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerBox",
               &Z_Registration_Info_UClass_ATriggerBox.InnerSingleton,
               StaticRegisterNativesATriggerBox,0x2c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ATriggerBox>,
               InternalVTableHelperCtorCaller<ATriggerBox>,local_res8,ATriggerBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerBox.InnerSingleton;
}

// ATriggerBox @ 14733e240

ATriggerBox * __thiscall ATriggerBox::ATriggerBox(ATriggerBox *this,FVTableHelper *param_1)

{
  ATriggerBase::ATriggerBase((ATriggerBase *)this,param_1);
  *(undefined ***)this = &___7ATriggerBox__6B_;
  return this;
}

// ~ATriggerBox @ 1473416e0

void __thiscall ATriggerBox::~ATriggerBox(ATriggerBox *this)

{
  *(undefined ***)this = &___7ATriggerBox__6B_;
  ATriggerBase::~ATriggerBase((ATriggerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14734fbb0

UClass * __cdecl ATriggerBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerBox",
               &Z_Registration_Info_UClass_ATriggerBox.InnerSingleton,
               StaticRegisterNativesATriggerBox,0x2c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ATriggerBox>,
               InternalVTableHelperCtorCaller<ATriggerBox>,local_res8,ATriggerBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerBox.InnerSingleton;
}

// StaticRegisterNativesATriggerBox @ 147358850

void __cdecl ATriggerBox::StaticRegisterNativesATriggerBox(void)

{
  return;
}

// ATriggerBox @ 1488adac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ATriggerBox * __thiscall ATriggerBox::ATriggerBox(ATriggerBox *this,FObjectInitializer *param_1)

{
  int iVar1;
  FName FVar2;
  UShapeComponent *pUVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FName *pFVar8;
  UClass *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  FName local_res8;
  FString local_38;
  FString local_28 [2];
  
  pFVar8 = ::FName::FName(&local_res8,L"CollisionComp");
  FVar2 = *pFVar8;
  pUVar9 = Z_Construct_UClass_UBoxComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar9,(TArrayView<FName_const_,int> *)0x0);
  ATriggerBase::ATriggerBase((ATriggerBase *)this,param_1);
  pUVar3 = *(UShapeComponent **)&this->field_0x2c0;
  *(undefined ***)this = &___7ATriggerBox__6B_;
  if (pUVar3 == (UShapeComponent *)0x0) {
    pFVar10 = GetTypeName<UBoxComponent>(&local_38);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar9 = Z_Construct_UClass_UBoxComponent_NoRegister();
  uVar7 = _UNK_151bce3f8;
  uVar6 = ___xmm_40440000000000004044000000000000;
  uVar5 = __real_4044000000000000;
  iVar1 = (int)pUVar9->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar9->_padding_)) {
    (pUVar3->ShapeColor).field0_0x0._s_0 = (FColor_u_0_s_0)TriggerBaseColor.field0_0x0;
    lVar4 = *(longlong *)pUVar3;
    *(undefined8 *)&pUVar3->field_0x568 = uVar6;
    *(undefined8 *)(pUVar3 + 1) = uVar7;
    *(undefined8 *)&pUVar3[1].field_0x8 = uVar5;
    (**(code **)(lVar4 + 0x788))
              (pUVar3,TriggerCollisionProfileName,
               CONCAT71((int7)((ulonglong)&pUVar9->_padding_ >> 8),1));
    return this;
  }
  pFVar10 = GetTypeName<UBoxComponent>(&local_38);
  pwVar11 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UShapeComponent>(local_28,pUVar3);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar11,pwVar12);
}

