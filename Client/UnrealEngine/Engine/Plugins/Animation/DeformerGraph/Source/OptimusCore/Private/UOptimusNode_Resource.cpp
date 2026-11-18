// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticClass @ 14e113e20

UClass * __cdecl UOptimusNode_Resource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_Resource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_Resource",
               &Z_Registration_Info_UClass_UOptimusNode_Resource.InnerSingleton,
               StaticRegisterNativesUOptimusNode_Resource,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNode_Resource>,
               InternalVTableHelperCtorCaller<UOptimusNode_Resource>,local_res8,
               UOptimusNode_ResourceAccessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_Resource.InnerSingleton;
}

// UOptimusNode_Resource @ 14e15bf50

UOptimusNode_Resource * __thiscall
UOptimusNode_Resource::UOptimusNode_Resource(UOptimusNode_Resource *this,FVTableHelper *param_1)

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

// UOptimusNode_Resource @ 14e15bfb0

UOptimusNode_Resource * __thiscall
UOptimusNode_Resource::UOptimusNode_Resource(UOptimusNode_Resource *this)

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

// ~UOptimusNode_Resource @ 14e1639f0

void __thiscall UOptimusNode_Resource::~UOptimusNode_Resource(UOptimusNode_Resource *this)

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

// ConstructNode @ 14e194040

void __thiscall UOptimusNode_Resource::ConstructNode(UOptimusNode_Resource *this)

{
  UObject *pUVar1;
  FName *pFVar2;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  undefined1 local_58 [48];
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x128);
  if (pUVar1 != (UObject *)0x0) {
    local_58._0_4_ = *(uint *)&pUVar1[1].field_0x8;
    local_58._4_4_ = *(uint *)&pUVar1[1].field_0xc;
    local_58._8_8_ = *(undefined8 *)&pUVar1[1].field_0x10;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_58 + 0x10),(FSoftObjectPath *)&pUVar1[1].field_0x18);
    pFVar2 = (FName *)(**(code **)(*(longlong *)this + 0x338))(this,local_res10,0,0);
    UOptimusNode::AddPinDirect
              ((UOptimusNode *)this,*pFVar2,Input,(FOptimusDataDomain *)&pUVar1[2].field_0x18,
               (FOptimusDataTypeRef *)local_58,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
    ::FName::FName(local_res18,"Get");
    local_58._0_4_ = *(uint *)&pUVar1[1].field_0x8;
    local_58._4_4_ = *(uint *)&pUVar1[1].field_0xc;
    local_58._8_8_ = *(undefined8 *)&pUVar1[1].field_0x10;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_58 + 0x10),(FSoftObjectPath *)&pUVar1[1].field_0x18);
    pFVar2 = (FName *)(**(code **)(*(longlong *)this + 0x338))(this,local_res10,1,0);
    UOptimusNode::AddPinDirect
              ((UOptimusNode *)this,*pFVar2,Output,(FOptimusDataDomain *)&pUVar1[2].field_0x18,
               (FOptimusDataTypeRef *)local_58,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
  }
  return;
}

// GetDataFunctionIndexFromPin @ 14e1c1830

int __thiscall
UOptimusNode_Resource::GetDataFunctionIndexFromPin
          (UOptimusNode_Resource *this,UOptimusNodePin *param_1)

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
        return (int)(param_1->Direction == Output);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5677653822772609006>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_Resource.cpp"
                       ,0x12,"GetPins().Contains(InPin)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  return -1;
}

// GetPrivateStaticClass @ 14e1d7d60

UClass * __cdecl UOptimusNode_Resource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_Resource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_Resource",
               &Z_Registration_Info_UClass_UOptimusNode_Resource.InnerSingleton,
               StaticRegisterNativesUOptimusNode_Resource,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNode_Resource>,
               InternalVTableHelperCtorCaller<UOptimusNode_Resource>,local_res8,
               UOptimusNode_ResourceAccessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_Resource.InnerSingleton;
}

// GetResourcePinName @ 14e1dfdf0

FName __thiscall
UOptimusNode_Resource::GetResourcePinName(UOptimusNode_Resource *this,int param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  FName *pFVar5;
  FName FVar6;
  int iVar7;
  uint in_register_00000014;
  wchar_t *pwVar8;
  FName in_R9;
  FName local_res20;
  FName local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  FVar6.Number = in_register_00000014;
  FVar6.ComparisonIndex.Value = param_1;
  local_res20 = in_R9;
  if (in_R9 == (FName)0x0) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x128);
    if (pUVar3 != (UObject *)0x0) {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar3[1].field_0x0;
      local_res20.Number = *(uint *)&pUVar3[1].field_0x4;
    }
  }
  if (param_2.ComparisonIndex.Value < 2) {
    pwVar8 = L"Get";
    if (param_2.ComparisonIndex.Value.Value == 0) {
      pwVar8 = L"Set";
    }
    ::FString::FString(&local_30,pwVar8);
    pFVar4 = ::FName::ToString(&local_res20,&local_20);
    ::FString::ConcatFF(&local_40,&local_30,pFVar4);
    iVar7 = local_40.Data.ArrayNum + -1;
    if (local_40.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_48,iVar7,(wchar_t *)local_40.Data.AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)FVar6 = *pFVar5;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
      return FVar6;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5677653822772608985>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_Resource.cpp"
                       ,0x27,"InPinIndex >= 0 && InPinIndex < 2");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar6 = (FName)(*pcVar1)();
      return FVar6;
    }
    *(FName *)FVar6 = (FName)0x0;
  }
  return FVar6;
}

// StaticRegisterNativesUOptimusNode_Resource @ 14e225d10

void __cdecl UOptimusNode_Resource::StaticRegisterNativesUOptimusNode_Resource(void)

{
  return;
}

