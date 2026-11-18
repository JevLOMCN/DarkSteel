// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticClass @ 148a26320

UClass * __cdecl UDEPRECATED_DataLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayer",
               &Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_DataLayer,0x58,8,CLASS_Intrinsic|CLASS_Deprecated,
               CASTCLASS_None,L"Engine",InternalConstructor<UDEPRECATED_DataLayer>,
               InternalVTableHelperCtorCaller<UDEPRECATED_DataLayer>,local_res8,UObject::StaticClass
               ,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton;
}

// UDEPRECATED_DataLayer @ 148a425e0

UDEPRECATED_DataLayer * __thiscall
UDEPRECATED_DataLayer::UDEPRECATED_DataLayer(UDEPRECATED_DataLayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_DataLayer__6B_;
  (this->DataLayerLabel).ComparisonIndex = 0;
  (this->DataLayerLabel).Number = 0;
  (this->Parent_DEPRECATED).field0_0x0.DebugPtr = (UDEPRECATED_DataLayer *)0x0;
  (this->Children_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children_DEPRECATED).ArrayNum = 0;
  (this->Children_DEPRECATED).ArrayMax = 0;
  return this;
}

// UDEPRECATED_DataLayer @ 148a42620

UDEPRECATED_DataLayer * __thiscall
UDEPRECATED_DataLayer::UDEPRECATED_DataLayer
          (UDEPRECATED_DataLayer *this,FObjectInitializer *param_1)

{
  undefined4 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_DataLayer__6B_;
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (this->DataLayerLabel).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (this->DataLayerLabel).Number = uVar1;
  this->bIsRuntime = 0;
  this->InitialRuntimeState = Unloaded;
  (this->DebugColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  (this->Parent_DEPRECATED).field0_0x0.DebugPtr = (UDEPRECATED_DataLayer *)0x0;
  (this->Children_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children_DEPRECATED).ArrayNum = 0;
  (this->Children_DEPRECATED).ArrayMax = 0;
  return this;
}

// ~UDEPRECATED_DataLayer @ 148a44600

void __thiscall UDEPRECATED_DataLayer::~UDEPRECATED_DataLayer(UDEPRECATED_DataLayer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_DataLayer__6B_;
  pFVar1 = (this->Children_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddChild @ 148a49250

void __thiscall
UDEPRECATED_DataLayer::AddChild(UDEPRECATED_DataLayer *this,UDEPRECATED_DataLayer *param_1)

{
  TArray<TObjectPtr<UDEPRECATED_DataLayer>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDEPRECATED_DataLayer *local_18 [2];
  
  pTVar1 = &this->Children_DEPRECATED;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDEPRECATED_DataLayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->Children_DEPRECATED).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Children_DEPRECATED).ArrayNum;
  piVar2 = &(this->Children_DEPRECATED).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Children_DEPRECATED).ArrayNum = iVar6 + 1;
  *(UDEPRECATED_DataLayer **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UDEPRECATED_DataLayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// ForEachChild @ 148a531e0

void __thiscall
UDEPRECATED_DataLayer::ForEachChild
          (UDEPRECATED_DataLayer *this,
          TFunctionRef<bool___cdecl(UDEPRECATED_DataLayer_const_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_res8;
  
  pFVar4 = (this->Children_DEPRECATED).AllocatorInstance.Data;
  iVar2 = (this->Children_DEPRECATED).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Children_DEPRECATED).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDEPRECATED_DataLayer>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8 = *(undefined8 *)pFVar4;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    if (cVar3 == '\0') {
      return;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 148a59f70

UClass * __cdecl UDEPRECATED_DataLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayer",
               &Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_DataLayer,0x58,8,CLASS_Intrinsic|CLASS_Deprecated,
               CASTCLASS_None,L"Engine",InternalConstructor<UDEPRECATED_DataLayer>,
               InternalVTableHelperCtorCaller<UDEPRECATED_DataLayer>,local_res8,UObject::StaticClass
               ,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton;
}

// IsEffectiveVisible @ 148a5e520

bool __thiscall UDEPRECATED_DataLayer::IsEffectiveVisible(UDEPRECATED_DataLayer *this)

{
  return false;
}

// IsInitiallyVisible @ 148a5eac0

bool __thiscall UDEPRECATED_DataLayer::IsInitiallyVisible(UDEPRECATED_DataLayer *this)

{
  return false;
}

// IsVisible @ 148a5ed60

bool __thiscall UDEPRECATED_DataLayer::IsVisible(UDEPRECATED_DataLayer *this)

{
  return false;
}

// PostLoad @ 148a613b0

void __thiscall UDEPRECATED_DataLayer::PostLoad(UDEPRECATED_DataLayer *this)

{
  int *piVar1;
  UDEPRECATED_DataLayer *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDEPRECATED_DataLayer *local_18 [2];
  
  UObject::PostLoad((UObject *)this);
  pUVar2 = (this->Parent_DEPRECATED).field0_0x0.DebugPtr;
  if (pUVar2 != (UDEPRECATED_DataLayer *)0x0) {
    local_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pFVar3 = (pUVar2->Children_DEPRECATED).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3 + (longlong)(pUVar2->Children_DEPRECATED).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pUVar2->Children_DEPRECATED).ArrayNum;
    piVar1 = &(pUVar2->Children_DEPRECATED).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pUVar2->Children_DEPRECATED).AllocatorInstance,piVar1);
    }
    (pUVar2->Children_DEPRECATED).ArrayNum = iVar6 + 1;
    *(UDEPRECATED_DataLayer **)
     ((pUVar2->Children_DEPRECATED).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UDEPRECATED_DataLayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// StaticRegisterNativesUDEPRECATED_DataLayer @ 148a6a320

void __cdecl UDEPRECATED_DataLayer::StaticRegisterNativesUDEPRECATED_DataLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEquals @ 148a6e5a0

void __cdecl UDEPRECATED_DataLayer::execEquals(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  local_18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  plVar2 = local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar2 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *plVar2 == *(longlong *)&param_1->field_0x18;
  return;
}

// execGetDataLayerLabel @ 148a6f5f0

void __cdecl
UDEPRECATED_DataLayer::execGetDataLayerLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 1);
  return;
}

// execGetDebugColor @ 148a6faa0

void __cdecl
UDEPRECATED_DataLayer::execGetDebugColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x10;
  return;
}

// execGetInitialRuntimeState @ 148a6fba0

void __cdecl
UDEPRECATED_DataLayer::execGetInitialRuntimeState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[1].field_0x8 & 1) != 0) {
    *(undefined1 *)param_3 = param_1[1].field_0xc;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetInitialState @ 148a6fc30

void __cdecl
UDEPRECATED_DataLayer::execGetInitialState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[1].field_0x8 & 1) != 0) {
    *(undefined1 *)param_3 = param_1[1].field_0xc;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsDynamicallyLoaded @ 148a6ff90

void __cdecl
UDEPRECATED_DataLayer::execIsDynamicallyLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[1].field_0x8 & 1;
  return;
}

// execIsEffectiveVisible @ 148a6ffc0

void __cdecl
UDEPRECATED_DataLayer::execIsEffectiveVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsInitiallyActive @ 148a70000

void __cdecl
UDEPRECATED_DataLayer::execIsInitiallyActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[1].field_0x8 & 1) != 0) && (param_1[1].field_0xc == '\x02')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsInitiallyVisible @ 148a70040

void __cdecl
UDEPRECATED_DataLayer::execIsInitiallyVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsRuntime @ 148a70080

void __cdecl UDEPRECATED_DataLayer::execIsRuntime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[1].field_0x8 & 1;
  return;
}

// execIsVisible @ 148a70210

void __cdecl UDEPRECATED_DataLayer::execIsVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

