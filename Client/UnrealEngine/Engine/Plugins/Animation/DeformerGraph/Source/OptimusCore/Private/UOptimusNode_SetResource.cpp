// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 8

// StaticClass @ 14e118f10

UClass * __cdecl UOptimusNode_SetResource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_SetResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_SetResource",
               &Z_Registration_Info_UClass_UOptimusNode_SetResource.InnerSingleton,
               StaticRegisterNativesUOptimusNode_SetResource,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNode_SetResource>,
               InternalVTableHelperCtorCaller<UOptimusNode_SetResource>,local_res8,
               UOptimusNode_ResourceAccessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_SetResource.InnerSingleton;
}

// UOptimusNode_SetResource @ 14e15c110

UOptimusNode_SetResource * __thiscall
UOptimusNode_SetResource::UOptimusNode_SetResource
          (UOptimusNode_SetResource *this,FVTableHelper *param_1)

{
  UOptimusNode_ResourceAccessorBase::UOptimusNode_ResourceAccessorBase
            ((UOptimusNode_ResourceAccessorBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusDataInterfaceProvider__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IOptimusComponentBindingProvider__;
  *(undefined ***)&this->field_0x118 = &_vftable__for__IOptimusPinMutabilityDefiner__;
  *(undefined ***)&this->field_0x120 = &_vftable__for__IOptimusNonCollapsibleNode__;
  return this;
}

// UOptimusNode_SetResource @ 14e15c170

UOptimusNode_SetResource * __thiscall
UOptimusNode_SetResource::UOptimusNode_SetResource(UOptimusNode_SetResource *this)

{
  UOptimusNode_ResourceAccessorBase::UOptimusNode_ResourceAccessorBase
            ((UOptimusNode_ResourceAccessorBase *)this);
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusDataInterfaceProvider__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IOptimusComponentBindingProvider__;
  *(undefined ***)&this->field_0x118 = &_vftable__for__IOptimusPinMutabilityDefiner__;
  *(undefined ***)&this->field_0x120 = &_vftable__for__IOptimusNonCollapsibleNode__;
  return this;
}

// ~UOptimusNode_SetResource @ 14e163b20

void __thiscall UOptimusNode_SetResource::~UOptimusNode_SetResource(UOptimusNode_SetResource *this)

{
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusDataInterfaceProvider__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IOptimusComponentBindingProvider__;
  *(undefined ***)&this->field_0x118 = &_vftable__for__IOptimusPinMutabilityDefiner__;
  *(undefined ***)&this->field_0x120 = &_vftable__for__IOptimusNonCollapsibleNode__;
  UOptimusNode_ResourceAccessorBase::~UOptimusNode_ResourceAccessorBase
            ((UOptimusNode_ResourceAccessorBase *)this);
  return;
}

// ConstructNode @ 14e194190

void __thiscall UOptimusNode_SetResource::ConstructNode(UOptimusNode_SetResource *this)

{
  UObject *pUVar1;
  FName *pFVar2;
  undefined1 local_res10 [8];
  undefined1 local_38 [48];
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x128);
  if (pUVar1 != (UObject *)0x0) {
    local_38._0_4_ = *(uint *)&pUVar1[1].field_0x8;
    local_38._4_4_ = *(uint *)&pUVar1[1].field_0xc;
    local_38._8_8_ = *(undefined8 *)&pUVar1[1].field_0x10;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_38 + 0x10),(FSoftObjectPath *)&pUVar1[1].field_0x18);
    pFVar2 = (FName *)(**(code **)(*(longlong *)this + 0x338))(this,local_res10,0,0);
    UOptimusNode::AddPinDirect
              ((UOptimusNode *)this,*pFVar2,Input,(FOptimusDataDomain *)&pUVar1[2].field_0x18,
               (FOptimusDataTypeRef *)local_38,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
  }
  return;
}

// GetDataFunctionIndexFromPin @ 14e1c1940

int __thiscall
UOptimusNode_SetResource::GetDataFunctionIndexFromPin
          (UOptimusNode_SetResource *this,UOptimusNodePin *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  longlong *plVar7;
  
  if (param_1 != (UOptimusNodePin *)0x0) {
    lVar2 = param_1->_padding_;
    if (lVar2 != 0) {
      pUVar6 = UOptimusNodePin::StaticClass();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) {
        return -1;
      }
    }
    plVar7 = *(longlong **)&this[-1].field_0xf8;
    iVar5 = *(int *)&this[-1].field_0x100;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    plVar1 = plVar7 + iVar5;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if ((UOptimusNodePin *)*plVar7 == param_1) {
        return 0;
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2960870077844422638>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_SetResource.cpp"
                       ,0x12,"GetPins().Contains(InPin)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  return -1;
}

// GetPrivateStaticClass @ 14e1d7ee0

UClass * __cdecl UOptimusNode_SetResource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_SetResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_SetResource",
               &Z_Registration_Info_UClass_UOptimusNode_SetResource.InnerSingleton,
               StaticRegisterNativesUOptimusNode_SetResource,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNode_SetResource>,
               InternalVTableHelperCtorCaller<UOptimusNode_SetResource>,local_res8,
               UOptimusNode_ResourceAccessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_SetResource.InnerSingleton;
}

// StaticRegisterNativesUOptimusNode_SetResource @ 14e225d30

void __cdecl UOptimusNode_SetResource::StaticRegisterNativesUOptimusNode_SetResource(void)

{
  return;
}

