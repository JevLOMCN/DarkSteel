// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 16

// StaticClass @ 146d64230

UClass * __cdecl UNavArea::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea",
               &Z_Registration_Info_UClass_UNavArea.InnerSingleton,StaticRegisterNativesUNavArea,
               0x48,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavArea>,InternalVTableHelperCtorCaller<UNavArea>,local_res8,
               UNavAreaBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea.InnerSingleton;
}

// UNavArea @ 146d758c0

UNavArea * __thiscall UNavArea::UNavArea(UNavArea *this,FVTableHelper *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  return this;
}

// UNavArea @ 146d75900

UNavArea * __thiscall UNavArea::UNavArea(UNavArea *this,FObjectInitializer *param_1)

{
  UNavAreaBase::UNavAreaBase((UNavAreaBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNavArea__6B_;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  this->DefaultCost = 1.0;
  this->FixedAreaEnteringCost = 0.0;
  (this->DrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Magenta.field0_0x0;
  (this->field10_0x40).SupportedAgentsBits = 0xffffffff;
  this->AreaFlags = 1;
  return this;
}

// ~UNavArea @ 146d78bb0

void __thiscall UNavArea::~UNavArea(UNavArea *this)

{
  this->_padding_ = (longlong)&___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  return;
}

// CopyFrom @ 146d88f00

void __thiscall UNavArea::CopyFrom(UNavArea *this,TSubclassOf<UNavArea> param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  float fVar6;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return;
  }
  pUVar5 = StaticClass();
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return;
  }
  pUVar5 = StaticClass();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar5 = *(UClass **)param_1.Class.field0_0x0;
      goto LAB_146d88f90;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_146d88f90:
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar3 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  this->DefaultCost = *(float *)&pUVar3[1].field_0x8;
  fVar6 = (float)(**(code **)(*(longlong *)pUVar3 + 0x2d0))(pUVar3);
  this->FixedAreaEnteringCost = fVar6;
  this->AreaFlags = *(ushort *)&pUVar3[1].field_0x1c;
  (this->DrawColor).field0_0x0 = *(FColor_u_0 *)&pUVar3[1].field_0x10;
  return;
}

// FinishDestroy @ 146d975b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UNavArea::FinishDestroy(UNavArea *this)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UNavigationSystemV1> local_28;
  
  if ((this->_padding_ & 0x10) != 0) {
    bVar3 = IsReloadActive();
    if (!bVar3) {
      pUVar1 = (UClass *)this->_padding_;
      local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ObjectArray.ArrayNum = 0;
      local_28.ObjectArray.ArrayMax = 0;
      local_28.Index = 0xffffffff;
      EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar6 = UNavigationSystemV1::StaticClass();
      GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                        EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UNavigationSystemV1>::Advance(&local_28);
        lVar7 = (longlong)local_28.Index;
        if (local_28.Index < 0) break;
        if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
        uVar5 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar5 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        UNavigationSystemV1::UnregisterNavAreaClass
                  (*(UNavigationSystemV1 **)
                    (local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8),pUVar1);
      }
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetColor @ 146d99fa0

FColor __cdecl UNavArea::GetColor(UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FColor_u_0 FVar6;
  UClass *pUVar7;
  UClass *in_RDX;
  
  if (in_RDX == (UClass *)0x0) {
    *(FColor_u_0 *)&param_1->_padding_ = FColor::Black.field0_0x0;
    return (FColor)SUB84(param_1,0);
  }
  if ((in_RDX->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(in_RDX);
  }
  pUVar2 = (in_RDX->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar6.Bits = (*pcVar4)();
      return (FColor_u_0)(FColor_u_0)FVar6._s_0;
    }
  }
  *(undefined4 *)&param_1->_padding_ = *(undefined4 *)&pUVar2[1].field_0x10;
  return (FColor)SUB84(param_1,0);
}

// GetFixedAreaEnteringCost @ 146d9b410

float __thiscall UNavArea::GetFixedAreaEnteringCost(UNavArea *this)

{
  return this->FixedAreaEnteringCost;
}

// GetPrivateStaticClass @ 146da0070

UClass * __cdecl UNavArea::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea",
               &Z_Registration_Info_UClass_UNavArea.InnerSingleton,StaticRegisterNativesUNavArea,
               0x48,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavArea>,InternalVTableHelperCtorCaller<UNavArea>,local_res8,
               UNavAreaBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea.InnerSingleton;
}

// InitializeArea @ 146da3d30

void __thiscall UNavArea::InitializeArea(UNavArea *this)

{
  return;
}

// PostInitProperties @ 146dabc60

void __thiscall UNavArea::PostInitProperties(UNavArea *this)

{
  UObject::PostInitProperties((UObject *)this);
  RegisterArea(this);
  return;
}

// PostLoad @ 146dac330

void __thiscall UNavArea::PostLoad(UNavArea *this)

{
  UObject::PostLoad((UObject *)this);
  RegisterArea(this);
  return;
}

// RegisterArea @ 146dae3e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UNavArea::RegisterArea(UNavArea *this)

{
  uint uVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EInternalObjectFlags EVar6;
  UClass *pUVar7;
  longlong lVar8;
  TObjectIterator<UNavigationSystemV1> local_28;
  
  uVar5 = (this->SupportedAgents).field0_0x0.PackedBits;
  if (-1 < (int)uVar5) {
    uVar1 = (this->field10_0x40).SupportedAgentsBits;
    uVar5 = (uVar1 ^ uVar5) & 1 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 2 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 4 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 8 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x10 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x20 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x40 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x80 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x100 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x200 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x400 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x800 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x1000 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x2000 ^ uVar5;
    uVar5 = (uVar5 ^ uVar1) & 0x4000 ^ uVar5;
    (this->SupportedAgents).field0_0x0.PackedBits = (uVar5 ^ uVar1) & 0x8000 ^ uVar5 | 0x80000000;
  }
  if (((this->_padding_ & 0x10) != 0) && (((uint)this->_padding_ >> 9 & 1) == 0)) {
    bVar4 = IsReloadActive();
    if (!bVar4) {
      pUVar2 = (UClass *)this->_padding_;
      local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ObjectArray.ArrayNum = 0;
      local_28.ObjectArray.ArrayMax = 0;
      local_28.Index = 0xffffffff;
      EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar7 = UNavigationSystemV1::StaticClass();
      GetObjectsOfClass(pUVar7,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                        EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UNavigationSystemV1>::Advance(&local_28);
        lVar8 = (longlong)local_28.Index;
        if (local_28.Index < 0) break;
        if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
        uVar5 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar5 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        UNavigationSystemV1::RegisterNavAreaClass
                  (*(UNavigationSystemV1 **)
                    (local_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8),pUVar2);
      }
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Serialize @ 146db8440

void __thiscall UNavArea::Serialize(UNavArea *this,FArchive *param_1)

{
  uint uVar1;
  
  if (((param_1->field_0x28 & 4) != 0) &&
     (uVar1 = (this->SupportedAgents).field0_0x0.PackedBits, -1 < (int)uVar1)) {
    (this->SupportedAgents).field0_0x0.PackedBits = uVar1 | 0x80000000;
  }
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 146db8470

void __thiscall UNavArea::Serialize(UNavArea *this,FStructuredArchiveRecord param_1)

{
  uint uVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if (((pFVar2->field_0x28 & 4) != 0) &&
     (uVar1 = (this->SupportedAgents).field0_0x0.PackedBits, -1 < (int)uVar1)) {
    (this->SupportedAgents).field0_0x0.PackedBits = uVar1 | 0x80000000;
  }
  UObject::Serialize((UObject *)this,pFVar2);
  return;
}

// StaticRegisterNativesUNavArea @ 146dba910

void __cdecl UNavArea::StaticRegisterNativesUNavArea(void)

{
  return;
}

