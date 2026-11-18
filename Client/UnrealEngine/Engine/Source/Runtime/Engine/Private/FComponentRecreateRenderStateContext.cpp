// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FComponentRecreateRenderStateContext @ 1477ebfb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentRecreateRenderStateContext * __thiscall
FComponentRecreateRenderStateContext::FComponentRecreateRenderStateContext
          (FComponentRecreateRenderStateContext *this,IPrimitiveComponent *param_1,
          TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FComponentRecreateRenderStateContext *pFVar4;
  void *local_18 [2];
  
  this->ScenesToUpdateAllPrimitiveSceneInfos = param_2;
  this->Component = (UActorComponent *)0x0;
  this->ComponentInterface = (IPrimitiveComponent *)0x0;
  if ((param_1 == (IPrimitiveComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponentInterface",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                         ,0x19,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FComponentRecreateRenderStateContext *)(*pcVar1)();
    return pFVar4;
  }
  cVar3 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (cVar3 != '\0') {
    (**(code **)((longlong)*param_1 + 0x68))(param_1,local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponentInterface->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                       ,0x1a,L"%s");
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FComponentRecreateRenderStateContext *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
  if ((cVar3 != '\0') && (cVar3 = (**(code **)*param_1)(param_1), cVar3 != '\0')) {
    (**(code **)((longlong)*param_1 + 0x50))(param_1);
    this->ComponentInterface = param_1;
    UpdateAllPrimitiveSceneInfosForSingleComponentInterface
              (param_1,this->ScenesToUpdateAllPrimitiveSceneInfos);
  }
  return this;
}

// FComponentRecreateRenderStateContext @ 1477ec0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentRecreateRenderStateContext * __thiscall
FComponentRecreateRenderStateContext::FComponentRecreateRenderStateContext
          (FComponentRecreateRenderStateContext *this,UActorComponent *param_1,
          TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FComponentRecreateRenderStateContext *pFVar3;
  FUObjectItem *pFVar4;
  FString local_18;
  
  this->ScenesToUpdateAllPrimitiveSceneInfos = param_2;
  this->Component = (UActorComponent *)0x0;
  this->ComponentInterface = (IPrimitiveComponent *)0x0;
  if ((param_1 == (UActorComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                         ,0x28,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FComponentRecreateRenderStateContext *)(*pcVar1)();
    return pFVar3;
  }
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                       ,0x29,L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FComponentRecreateRenderStateContext *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1->bRegistered == '\x01' && param_1->bRenderStateCreated == '\x01') {
    (**(code **)(param_1->_padding_ + 0x3a8))(param_1);
    this->Component = param_1;
    UpdateAllPrimitiveSceneInfosForSingleComponent
              (param_1,this->ScenesToUpdateAllPrimitiveSceneInfos);
  }
  return this;
}

// ~FComponentRecreateRenderStateContext @ 1477f3140

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
FComponentRecreateRenderStateContext::~FComponentRecreateRenderStateContext
          (FComponentRecreateRenderStateContext *this)

{
  UActorComponent *pUVar1;
  char cVar2;
  
  pUVar1 = this->Component;
  if ((pUVar1 != (UActorComponent *)0x0) &&
     (pUVar1->bRegistered == '\x01' && pUVar1->bRenderStateCreated == '\0')) {
    if (GPrecachePSOsOnComponentRecreateRenderContext != 0) {
      (**(code **)(pUVar1->_padding_ + 0x378))();
    }
    (**(code **)(this->Component->_padding_ + 0x388))(this->Component,0);
    UpdateAllPrimitiveSceneInfosForSingleComponent
              (this->Component,this->ScenesToUpdateAllPrimitiveSceneInfos);
  }
  if (this->ComponentInterface != (IPrimitiveComponent *)0x0) {
    cVar2 = (**(code **)*this->ComponentInterface)();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)((longlong)*this->ComponentInterface + 0x18))();
      if (cVar2 != '\0') {
        if (GPrecachePSOsOnComponentRecreateRenderContext != 0) {
          (**(code **)((longlong)*this->ComponentInterface + 0xa0))();
        }
        (**(code **)((longlong)*this->ComponentInterface + 0x58))(this->ComponentInterface,0);
        UpdateAllPrimitiveSceneInfosForSingleComponentInterface
                  (this->ComponentInterface,this->ScenesToUpdateAllPrimitiveSceneInfos);
        return;
      }
    }
  }
  return;
}

