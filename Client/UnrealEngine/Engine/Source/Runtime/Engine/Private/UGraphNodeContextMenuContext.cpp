// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b27ef0

UClass * __cdecl UGraphNodeContextMenuContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGraphNodeContextMenuContext.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GraphNodeContextMenuContext",
               &Z_Registration_Info_UClass_UGraphNodeContextMenuContext.InnerSingleton,
               StaticRegisterNativesUGraphNodeContextMenuContext,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGraphNodeContextMenuContext>,
               InternalVTableHelperCtorCaller<UGraphNodeContextMenuContext>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGraphNodeContextMenuContext.InnerSingleton;
}

// UGraphNodeContextMenuContext @ 147b3b480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGraphNodeContextMenuContext * __thiscall
UGraphNodeContextMenuContext::UGraphNodeContextMenuContext
          (UGraphNodeContextMenuContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGraphNodeContextMenuContext__6B_;
  (this->Blueprint).field0_0x0.DebugPtr = (UBlueprint *)0x0;
  (this->Graph).field0_0x0.DebugPtr = (UEdGraph *)0x0;
  (this->Node).field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
  return this;
}

// UGraphNodeContextMenuContext @ 147b3b4c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGraphNodeContextMenuContext * __thiscall
UGraphNodeContextMenuContext::UGraphNodeContextMenuContext(UGraphNodeContextMenuContext *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UGraphNodeContextMenuContext__6B_;
  (this->Blueprint).field0_0x0.DebugPtr = (UBlueprint *)0x0;
  (this->Graph).field0_0x0.DebugPtr = (UEdGraph *)0x0;
  (this->Node).field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
  this->Pin = (UEdGraphPin *)0x0;
  return this;
}

// ~UGraphNodeContextMenuContext @ 147b3d950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGraphNodeContextMenuContext::~UGraphNodeContextMenuContext(UGraphNodeContextMenuContext *this)

{
  this->_padding_ = (longlong)&___7UGraphNodeContextMenuContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6c1e0

UClass * __cdecl UGraphNodeContextMenuContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGraphNodeContextMenuContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GraphNodeContextMenuContext",
               &Z_Registration_Info_UClass_UGraphNodeContextMenuContext.InnerSingleton,
               StaticRegisterNativesUGraphNodeContextMenuContext,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGraphNodeContextMenuContext>,
               InternalVTableHelperCtorCaller<UGraphNodeContextMenuContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGraphNodeContextMenuContext.InnerSingleton;
}

// Init @ 147b74ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGraphNodeContextMenuContext::Init
          (UGraphNodeContextMenuContext *this,UEdGraph *param_1,UEdGraphNode *param_2,
          UEdGraphPin *param_3,bool param_4)

{
  UEdGraphNode *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UEdGraph *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Graph).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UEdGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Node).field0_0x0.DebugPtr = param_2;
  this->bIsDebugging = param_4;
  this->Pin = param_3;
  if (param_3 != (UEdGraphPin *)0x0) {
    if (param_3->OwningNode == (UEdGraphNode *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                         ,0x1d4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar1 = param_3->OwningNode;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEdGraphNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->Node).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// StaticRegisterNativesUGraphNodeContextMenuContext @ 147b8ec80

void __cdecl UGraphNodeContextMenuContext::StaticRegisterNativesUGraphNodeContextMenuContext(void)

{
  return;
}

