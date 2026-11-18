// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 18

// StaticClass @ 14e111370

UClass * __cdecl UOptimusNode_ComputeKernelFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ComputeKernelFunction",
               &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ComputeKernelFunction,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_ComputeKernelFunction>,
               InternalVTableHelperCtorCaller<UOptimusNode_ComputeKernelFunction>,local_res8,
               UOptimusNode_ComputeKernelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.InnerSingleton;
}

// UOptimusNode_ComputeKernelFunction @ 14e15b2c0

UOptimusNode_ComputeKernelFunction * __thiscall
UOptimusNode_ComputeKernelFunction::UOptimusNode_ComputeKernelFunction
          (UOptimusNode_ComputeKernelFunction *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusComputeKernelProvider__;
  return this;
}

// UOptimusNode_ComputeKernelFunction @ 14e15b300

UOptimusNode_ComputeKernelFunction * __thiscall
UOptimusNode_ComputeKernelFunction::UOptimusNode_ComputeKernelFunction
          (UOptimusNode_ComputeKernelFunction *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusComputeKernelProvider__;
  return this;
}

// ~UOptimusNode_ComputeKernelFunction @ 14e1633b0

void __thiscall
UOptimusNode_ComputeKernelFunction::~UOptimusNode_ComputeKernelFunction
          (UOptimusNode_ComputeKernelFunction *this)

{
  *(undefined ***)this = &UOptimusNode_ComputeKernelBase::_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &___7IOptimusComputeKernelProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// ConstructNode @ 14e192d80

void __thiscall
UOptimusNode_ComputeKernelFunction::ConstructNode(UOptimusNode_ComputeKernelFunction *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [48];
  
  lVar4 = *(longlong *)&this->field_0x10;
  if (lVar4 != 0) {
    pUVar3 = UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e192dcb;
  }
  lVar4 = 0;
LAB_14e192dcb:
  lVar2 = *(longlong *)(lVar4 + 0x248);
  iVar1 = *(int *)(lVar4 + 0x250);
  puVar5 = (undefined8 *)(lVar2 + 0x10);
  while( true ) {
    if (*(int *)(lVar4 + 0x250) != iVar1) {
      `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FName *)(puVar5 + -2) == (FName *)((longlong)iVar1 * 0x80 + lVar2)) break;
    local_58._0_8_ = *(FName *)(puVar5 + -1);
    local_58._8_8_ = *puVar5;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_58 + 0x10),(FSoftObjectPath *)(puVar5 + 1));
    UOptimusNode::AddPinDirect
              ((UOptimusNode *)this,*(FName *)(puVar5 + -2),Input,(FOptimusDataDomain *)(puVar5 + 5)
               ,(FOptimusDataTypeRef *)local_58,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
    puVar5 = puVar5 + 0x10;
  }
  lVar2 = *(longlong *)(lVar4 + 600);
  iVar1 = *(int *)(lVar4 + 0x260);
  puVar5 = (undefined8 *)(lVar2 + 0x10);
  while( true ) {
    if (*(int *)(lVar4 + 0x260) != iVar1) {
      `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FName *)(puVar5 + -2) == (FName *)((longlong)iVar1 * 0x80 + lVar2)) break;
    local_58._0_8_ = *(FName *)(puVar5 + -1);
    local_58._8_8_ = *puVar5;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_58 + 0x10),(FSoftObjectPath *)(puVar5 + 1));
    UOptimusNode::AddPinDirect
              ((UOptimusNode *)this,*(FName *)(puVar5 + -2),Output,
               (FOptimusDataDomain *)(puVar5 + 5),(FOptimusDataTypeRef *)local_58,
               (UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
    puVar5 = puVar5 + 0x10;
  }
  return;
}

// DoesOutputPinSupportAtomic @ 14e1a4920

bool __thiscall
UOptimusNode_ComputeKernelFunction::DoesOutputPinSupportAtomic
          (UOptimusNode_ComputeKernelFunction *this,UOptimusNodePin *param_1)

{
  return false;
}

// DoesOutputPinSupportRead @ 14e1a4a20

bool __thiscall
UOptimusNode_ComputeKernelFunction::DoesOutputPinSupportRead
          (UOptimusNode_ComputeKernelFunction *this,UOptimusNodePin *param_1)

{
  return false;
}

// GetDisplayName @ 14e1c44d0

FText * __thiscall
UOptimusNode_ComputeKernelFunction::GetDisplayName
          (UOptimusNode_ComputeKernelFunction *this,FText *__return_storage_ptr__)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  longlong lVar4;
  FString local_28;
  FString local_18;
  
  lVar4 = *(longlong *)&this->field_0x10;
  if (lVar4 != 0) {
    pUVar2 = UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e1c450b;
  }
  lVar4 = 0;
LAB_14e1c450b:
  pFVar3 = ::FName::ToString((FName *)(lVar4 + 0x210),&local_18);
  pFVar3 = ::FName::NameToDisplayString(&local_28,pFVar3,false);
  FText::FromString(__return_storage_ptr__,pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExecutionDomain @ 14e1c4e10

FOptimusExecutionDomain * __thiscall
UOptimusNode_ComputeKernelFunction::GetExecutionDomain
          (UOptimusNode_ComputeKernelFunction *this,FOptimusExecutionDomain *__return_storage_ptr__)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)&this[-1].field_0x18;
  if (lVar3 != 0) {
    pUVar2 = UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e1c4e4e;
  }
  lVar3 = 0;
LAB_14e1c4e4e:
  __return_storage_ptr__->Type = *(EOptimusExecutionDomainType *)(lVar3 + 0x218);
  __return_storage_ptr__->Name = *(FName *)(lVar3 + 0x21c);
  ::FString::FString(&__return_storage_ptr__->Expression,(FString *)(lVar3 + 0x228));
  return __return_storage_ptr__;
}

// GetGeneratorClass @ 14e1c55e0

UOptimusNode_ComputeKernelFunctionGeneratorClass * __thiscall
UOptimusNode_ComputeKernelFunction::GetGeneratorClass(UOptimusNode_ComputeKernelFunction *this)

{
  int iVar1;
  UOptimusNode_ComputeKernelFunctionGeneratorClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = *(UOptimusNode_ComputeKernelFunctionGeneratorClass **)&this->field_0x10;
  if (pUVar2 != (UOptimusNode_ComputeKernelFunctionGeneratorClass *)0x0) {
    pUVar3 = UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOptimusNode_ComputeKernelFunctionGeneratorClass *)0x0;
}

// GetGroupSize @ 14e1c58f0

TIntVector3<int> * __thiscall
UOptimusNode_ComputeKernelFunction::GetGroupSize
          (UOptimusNode_ComputeKernelFunction *this,TIntVector3<int> *__return_storage_ptr__)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)&this->field_0x10;
  if (lVar3 != 0) {
    pUVar2 = UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e1c592b;
  }
  lVar3 = 0;
LAB_14e1c592b:
  iVar1 = *(int *)(lVar3 + 0x240);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(lVar3 + 0x238);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
  return __return_storage_ptr__;
}

// GetKernelHlslName @ 14e1c8de0

FString * __thiscall
UOptimusNode_ComputeKernelFunction::GetKernelHlslName
          (UOptimusNode_ComputeKernelFunction *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)&this->field_0x10;
  if (lVar3 != 0) {
    pUVar2 = UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e1c8e1b;
  }
  lVar3 = 0;
LAB_14e1c8e1b:
  ::FName::ToString((FName *)(lVar3 + 0x210),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetKernelSourceText @ 14e1c8f40

FString * __thiscall
UOptimusNode_ComputeKernelFunction::GetKernelSourceText
          (UOptimusNode_ComputeKernelFunction *this,FString *__return_storage_ptr__,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelFunction.cpp"
                     ,0xb8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNodeCategory @ 14e1cad30

FName __thiscall
UOptimusNode_ComputeKernelFunction::GetNodeCategory(UOptimusNode_ComputeKernelFunction *this)

{
  int iVar1;
  UClass *pUVar2;
  FName in_RDX;
  longlong lVar3;
  
  lVar3 = *(longlong *)&this->field_0x10;
  if (lVar3 != 0) {
    pUVar2 = UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e1cad6b;
  }
  lVar3 = 0;
LAB_14e1cad6b:
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar3 + 0x208);
  return in_RDX;
}

// GetPrimaryGroupPin @ 14e1d41f0

UOptimusNodePin * __thiscall
UOptimusNode_ComputeKernelFunction::GetPrimaryGroupPin(UOptimusNode_ComputeKernelFunction *this)

{
  return (UOptimusNodePin *)0x0;
}

// GetPrivateStaticClass @ 14e1d7520

UClass * __cdecl UOptimusNode_ComputeKernelFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ComputeKernelFunction",
               &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ComputeKernelFunction,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_ComputeKernelFunction>,
               InternalVTableHelperCtorCaller<UOptimusNode_ComputeKernelFunction>,local_res8,
               UOptimusNode_ComputeKernelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.InnerSingleton;
}

// MakeKernelDataInterface @ 14e1f1990

UComputeDataInterface * __thiscall
UOptimusNode_ComputeKernelFunction::MakeKernelDataInterface
          (UOptimusNode_ComputeKernelFunction *this,UObject *param_1)

{
  return (UComputeDataInterface *)0x0;
}

// StaticRegisterNativesUOptimusNode_ComputeKernelFunction @ 14e225c60

void __cdecl
UOptimusNode_ComputeKernelFunction::StaticRegisterNativesUOptimusNode_ComputeKernelFunction(void)

{
  return;
}

