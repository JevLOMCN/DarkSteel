// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147673890

UClass * __cdecl ABrush::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABrush.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Brush",&Z_Registration_Info_UClass_ABrush.InnerSingleton,
               StaticRegisterNativesABrush,0x2f8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ABrush>,InternalVTableHelperCtorCaller<ABrush>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABrush.InnerSingleton;
}

// ABrush @ 147685a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABrush * __thiscall ABrush::ABrush(ABrush *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ABrush__6B_;
  (this->Brush).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->BrushComponent).field0_0x0.DebugPtr = (UBrushComponent *)0x0;
  (this->SavedSelections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedSelections).ArrayNum = 0;
  (this->SavedSelections).ArrayMax = 0;
  return this;
}

// ABrush @ 147685aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABrush * __thiscall ABrush::ABrush(ABrush *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UBrushComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ABrush__6B_;
  (this->Brush).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->BrushComponent).field0_0x0.DebugPtr = (UBrushComponent *)0x0;
  (this->SavedSelections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedSelections).ArrayNum = 0;
  (this->SavedSelections).ArrayMax = 0;
  pFVar3 = ::FName::FName(&local_res8,L"BrushComponent0");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UBrushComponent_NoRegister();
  pUVar5 = (UBrushComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBrushComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->BrushComponent).field0_0x0.DebugPtr = pUVar5;
  pUVar5->field_0x1ab = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->BrushComponent).field0_0x0.DebugPtr,false);
  UActorComponent::SetCanEverAffectNavigation
            ((UActorComponent *)(this->BrushComponent).field0_0x0.DebugPtr,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->BrushComponent).field0_0x0.DebugPtr, pUVar5 != (UBrushComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->BrushComponent).field0_0x0;
  AActor::SetHidden((AActor *)this,true);
  this->bNotForClientOrServer = 0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  return this;
}

// ~ABrush @ 147689d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ABrush::~ABrush(ABrush *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ABrush__6B_;
  pFVar1 = (this->SavedSelections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1476b3890

UClass * __cdecl ABrush::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABrush.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Brush",&Z_Registration_Info_UClass_ABrush.InnerSingleton,
               StaticRegisterNativesABrush,0x2f8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ABrush>,InternalVTableHelperCtorCaller<ABrush>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABrush.InnerSingleton;
}

// GetWireColor @ 1476b6560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FColor __thiscall ABrush::GetWireColor(ABrush *this)

{
  uchar uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  FColor FVar5;
  FColor_u_0 *in_RDX;
  
  lVar3 = this->_padding_;
  *in_RDX = (GEngine->C_BrushWire).field0_0x0;
  cVar4 = (**(code **)(lVar3 + 0x768))();
  FVar5.field0_0x0 = SUB84(in_RDX,0);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(this->_padding_ + 0x770))(this);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(this->_padding_ + 0x778))(this);
      if (cVar4 != '\0') {
        if (this->bColored != 0) goto LAB_1476b66c6;
        *in_RDX = (GEngine->C_BrushShape).field0_0x0;
      }
      return (FColor)FVar5.field0_0x0;
    }
    if (this->bColored == 0) {
      *in_RDX = (GEngine->C_Volume).field0_0x0;
      return (FColor)FVar5.field0_0x0;
    }
  }
  else if (this->bColored == 0) {
    uVar1 = (this->BrushType).Value;
    if (uVar1 == '\x02') {
      *in_RDX = (GEngine->C_SubtractWire).field0_0x0;
      return (FColor)FVar5.field0_0x0;
    }
    if (uVar1 != '\x01') {
      *in_RDX = (GEngine->C_BrushWire).field0_0x0;
      return (FColor)FVar5.field0_0x0;
    }
    uVar2 = this->PolyFlags;
    if ((uVar2 >> 0x1a & 1) != 0) {
      *in_RDX = (GEngine->C_SemiSolidWire).field0_0x0;
      return (FColor)FVar5.field0_0x0;
    }
    if ((uVar2 & 8) != 0) {
      *in_RDX = (GEngine->C_NonSolidWire).field0_0x0;
      return (FColor)FVar5.field0_0x0;
    }
    if ((uVar2 & 0x20) != 0) {
      *in_RDX = (GEngine->C_ScaleBoxHi).field0_0x0;
      return (FColor)FVar5.field0_0x0;
    }
    *in_RDX = (GEngine->C_AddWire).field0_0x0;
    return (FColor)FVar5.field0_0x0;
  }
LAB_1476b66c6:
  *in_RDX = (this->BrushColor).field0_0x0;
  return (FColor)FVar5.field0_0x0;
}

// IsComponentRelevantForNavigation @ 1476ba860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ABrush::IsComponentRelevantForNavigation(ABrush *this,UActorComponent *param_1)

{
  UBrushComponent *pUVar1;
  char cVar2;
  
  pUVar1 = (this->BrushComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UBrushComponent *)0x0) && (pUVar1 == (UBrushComponent *)param_1)) {
    cVar2 = (**(code **)(this->_padding_ + 0x768))();
    return cVar2 == '\0';
  }
  return true;
}

// IsLevelBoundsRelevant @ 1476bab60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ABrush::IsLevelBoundsRelevant(ABrush *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ULevel *pUVar4;
  
  pUVar4 = AActor::GetLevel((AActor *)this);
  if (pUVar4 != (ULevel *)0x0) {
    if ((pUVar4->Actors).ArrayNum < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (this != *(ABrush **)((pUVar4->Actors).AllocatorInstance.Data + 8)) {
      return true;
    }
  }
  return false;
}

// IsStaticBrush @ 1476bace0

bool __thiscall ABrush::IsStaticBrush(ABrush *this)

{
  UBrushComponent *pUVar1;
  
  pUVar1 = (this->BrushComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UBrushComponent *)0x0) && (pUVar1->field_0x1ab == '\0')) {
    return true;
  }
  return false;
}

// IsVolumeBrush @ 1476bb170

bool __thiscall ABrush::IsVolumeBrush(ABrush *this)

{
  return false;
}

// RebuildNavigationData @ 1476bfea0

void __thiscall ABrush::RebuildNavigationData(ABrush *this)

{
  return;
}

// StaticRegisterNativesABrush @ 1476ca130

void __cdecl ABrush::StaticRegisterNativesABrush(void)

{
  return;
}

