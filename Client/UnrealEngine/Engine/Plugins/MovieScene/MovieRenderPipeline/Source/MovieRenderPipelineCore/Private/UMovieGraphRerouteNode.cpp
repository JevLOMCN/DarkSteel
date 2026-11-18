// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 14

// StaticClass @ 14dcf7150

UClass * __cdecl UMovieGraphRerouteNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRerouteNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRerouteNode",
               &Z_Registration_Info_UClass_UMovieGraphRerouteNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphRerouteNode,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphRerouteNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRerouteNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRerouteNode.InnerSingleton;
}

// UMovieGraphRerouteNode @ 14dd0b0d0

UMovieGraphRerouteNode * __thiscall
UMovieGraphRerouteNode::UMovieGraphRerouteNode(UMovieGraphRerouteNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphRerouteNode__6B_;
  (this->InputOutputProperties).Label.ComparisonIndex = 0;
  (this->InputOutputProperties).Label.Number = 0;
  (this->InputOutputProperties).TypeObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->InputOutputProperties).Type = Float;
  (this->InputOutputProperties).bAllowMultipleConnections = true;
  (this->InputOutputProperties).bIsBranch = false;
  (this->InputOutputProperties).bIsWildcard = false;
  (this->InputOutputProperties).bIsBuiltIn = true;
  return this;
}

// UMovieGraphRerouteNode @ 14dd0b120

UMovieGraphRerouteNode * __thiscall
UMovieGraphRerouteNode::UMovieGraphRerouteNode(UMovieGraphRerouteNode *this)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphRerouteNode__6B_;
  (this->InputOutputProperties).Label.ComparisonIndex = 0;
  (this->InputOutputProperties).Label.Number = 0;
  (this->InputOutputProperties).Type = None;
  (this->InputOutputProperties).TypeObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->InputOutputProperties).bAllowMultipleConnections = false;
  (this->InputOutputProperties).bIsBranch = false;
  (this->InputOutputProperties).bIsWildcard = true;
  (this->InputOutputProperties).bIsBuiltIn = true;
  return this;
}

// ~UMovieGraphRerouteNode @ 14dd0dd50

void __thiscall UMovieGraphRerouteNode::~UMovieGraphRerouteNode(UMovieGraphRerouteNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphRerouteNode__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// CanBeDisabled @ 14dd188e0

bool __thiscall UMovieGraphRerouteNode::CanBeDisabled(UMovieGraphRerouteNode *this)

{
  return false;
}

// GetInputPinProperties @ 14dd26900

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphRerouteNode::GetInputPinProperties
          (UMovieGraphRerouteNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FMovieGraphPinProperties local_28;
  
  local_28.Label = (this->InputOutputProperties).Label;
  local_28.Type = (this->InputOutputProperties).Type;
  local_28.TypeObject.field0_0x0 =
       (TObjectPtr<UObject_const_>_u_0)(this->InputOutputProperties).TypeObject.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_28.TypeObject.field0_0x0.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.TypeObject.field0_0x0);
  }
  local_28.bAllowMultipleConnections = (this->InputOutputProperties).bAllowMultipleConnections;
  local_28.bIsBranch = (this->InputOutputProperties).bIsBranch;
  local_28.bIsWildcard = (this->InputOutputProperties).bIsWildcard;
  local_28.bIsBuiltIn = (this->InputOutputProperties).bIsBuiltIn;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FMovieGraphPinProperties,FMovieGraphPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,&local_28,1);
  return __return_storage_ptr__;
}

// GetOutputPinProperties @ 14dd2af50

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphRerouteNode::GetOutputPinProperties
          (UMovieGraphRerouteNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FMovieGraphPinProperties local_28;
  
  local_28.Label = (this->InputOutputProperties).Label;
  local_28.Type = (this->InputOutputProperties).Type;
  local_28.TypeObject.field0_0x0 =
       (TObjectPtr<UObject_const_>_u_0)(this->InputOutputProperties).TypeObject.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_28.TypeObject.field0_0x0.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.TypeObject.field0_0x0);
  }
  local_28.bAllowMultipleConnections = (this->InputOutputProperties).bAllowMultipleConnections;
  local_28.bIsBranch = (this->InputOutputProperties).bIsBranch;
  local_28.bIsWildcard = (this->InputOutputProperties).bIsWildcard;
  local_28.bIsBuiltIn = (this->InputOutputProperties).bIsBuiltIn;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FMovieGraphPinProperties,FMovieGraphPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,&local_28,1);
  return __return_storage_ptr__;
}

// GetPassThroughPin @ 14dd2bfa0

UMovieGraphPin * __thiscall
UMovieGraphRerouteNode::GetPassThroughPin(UMovieGraphRerouteNode *this,UMovieGraphPin *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMovieGraphPin *pUVar5;
  longlong *plVar6;
  
  if (param_1 != (UMovieGraphPin *)0x0) {
    plVar6 = (longlong *)this->_padding_;
    iVar2 = (int)this->_padding_;
    plVar1 = plVar6 + iVar2;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (((UMovieGraphPin *)*plVar6 != (UMovieGraphPin *)0x0) &&
         ((UMovieGraphPin *)*plVar6 == param_1)) {
        if (((int)this->_padding_ < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UMovieGraphPin *)(*pcVar3)();
          return pUVar5;
        }
        return *(UMovieGraphPin **)this->_padding_;
      }
    }
    plVar6 = (longlong *)this->_padding_;
    plVar1 = plVar6 + (int)this->_padding_;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (((UMovieGraphPin *)*plVar6 != (UMovieGraphPin *)0x0) &&
         ((UMovieGraphPin *)*plVar6 == param_1)) {
        if ((iVar2 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UMovieGraphPin *)(*pcVar3)();
          return pUVar5;
        }
        return *(UMovieGraphPin **)this->_padding_;
      }
    }
  }
  return (UMovieGraphPin *)0x0;
}

// GetPinProperties @ 14dd2c0b0

FMovieGraphPinProperties * __thiscall
UMovieGraphRerouteNode::GetPinProperties
          (UMovieGraphRerouteNode *this,FMovieGraphPinProperties *__return_storage_ptr__)

{
  UObject *pUVar1;
  
  __return_storage_ptr__->Label = (this->InputOutputProperties).Label;
  __return_storage_ptr__->Type = (this->InputOutputProperties).Type;
  pUVar1 = (this->InputOutputProperties).TypeObject.field0_0x0.DebugPtr;
  (__return_storage_ptr__->TypeObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  __return_storage_ptr__->bAllowMultipleConnections =
       (this->InputOutputProperties).bAllowMultipleConnections;
  __return_storage_ptr__->bIsBranch = (this->InputOutputProperties).bIsBranch;
  __return_storage_ptr__->bIsWildcard = (this->InputOutputProperties).bIsWildcard;
  __return_storage_ptr__->bIsBuiltIn = (this->InputOutputProperties).bIsBuiltIn;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2cf70

UClass * __cdecl UMovieGraphRerouteNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRerouteNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRerouteNode",
               &Z_Registration_Info_UClass_UMovieGraphRerouteNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphRerouteNode,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphRerouteNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRerouteNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRerouteNode.InnerSingleton;
}

// SetPinProperties @ 14dd40360

void __thiscall
UMovieGraphRerouteNode::SetPinProperties
          (UMovieGraphRerouteNode *this,FMovieGraphPinProperties *param_1)

{
  UObject *pUVar1;
  
  (this->InputOutputProperties).Label = param_1->Label;
  (this->InputOutputProperties).Type = param_1->Type;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->TypeObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->InputOutputProperties).TypeObject.field0_0x0 = (param_1->TypeObject).field0_0x0;
  (this->InputOutputProperties).bAllowMultipleConnections = param_1->bAllowMultipleConnections;
  (this->InputOutputProperties).bIsBranch = param_1->bIsBranch;
  (this->InputOutputProperties).bIsWildcard = param_1->bIsWildcard;
  (this->InputOutputProperties).bIsBuiltIn = param_1->bIsBuiltIn;
  return;
}

// StaticRegisterNativesUMovieGraphRerouteNode @ 14dd45320

void __cdecl UMovieGraphRerouteNode::StaticRegisterNativesUMovieGraphRerouteNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphRerouteNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPinProperties @ 14dd51b40

void __cdecl
UMovieGraphRerouteNode::execGetPinProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  UObject *pUVar7;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = *(undefined8 *)&param_1[4].field_0x10;
  uVar1 = param_1[4].field_0x18;
  pUVar7 = *(UObject **)&param_1[4].field_0x20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  uVar2 = *(undefined1 *)(param_1 + 5);
  uVar3 = param_1[5].field_0x1;
  uVar4 = param_1[5].field_0x2;
  uVar5 = param_1[5].field_0x3;
  *(undefined8 *)param_3 = uVar6;
  *(undefined1 *)((longlong)param_3 + 8) = uVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  *(UObject **)((longlong)param_3 + 0x10) = pUVar7;
  *(undefined1 *)((longlong)param_3 + 0x1b) = uVar5;
  *(undefined1 *)((longlong)param_3 + 0x18) = uVar2;
  *(undefined1 *)((longlong)param_3 + 0x19) = uVar3;
  *(undefined1 *)((longlong)param_3 + 0x1a) = uVar4;
  return;
}

// execSetPinProperties @ 14dd57600

void __cdecl
UMovieGraphRerouteNode::execSetPinProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar *puVar9;
  uchar local_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  local_28[8] = 5;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_18 = 0;
  local_10 = 0x1000001;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar9 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar5 = puVar9[4];
  uVar6 = puVar9[5];
  uVar7 = puVar9[6];
  uVar8 = puVar9[7];
  param_1[4].field_0x10 = puVar9[0];
  param_1[4].field_0x11 = uVar2;
  param_1[4].field_0x12 = uVar3;
  param_1[4].field_0x13 = uVar4;
  param_1[4].field_0x14 = uVar5;
  param_1[4].field_0x15 = uVar6;
  param_1[4].field_0x16 = uVar7;
  param_1[4].field_0x17 = uVar8;
  param_1[4].field_0x18 = puVar9[8];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(puVar9 + 0x10) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(puVar9 + 0x10));
  }
  uVar2 = puVar9[0x11];
  uVar3 = puVar9[0x12];
  uVar4 = puVar9[0x13];
  uVar5 = puVar9[0x14];
  uVar6 = puVar9[0x15];
  uVar7 = puVar9[0x16];
  uVar8 = puVar9[0x17];
  param_1[4].field_0x20 = puVar9[0x10];
  param_1[4].field_0x21 = uVar2;
  param_1[4].field_0x22 = uVar3;
  param_1[4].field_0x23 = uVar4;
  param_1[4].field_0x24 = uVar5;
  param_1[4].field_0x25 = uVar6;
  param_1[4].field_0x26 = uVar7;
  param_1[4].field_0x27 = uVar8;
  *(uchar *)(param_1 + 5) = puVar9[0x18];
  param_1[5].field_0x1 = puVar9[0x19];
  param_1[5].field_0x2 = puVar9[0x1a];
  param_1[5].field_0x3 = puVar9[0x1b];
  return;
}

