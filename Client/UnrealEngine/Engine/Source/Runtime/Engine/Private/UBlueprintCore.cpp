// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472576e0

UClass * __cdecl UBlueprintCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCore.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintCore",
               &Z_Registration_Info_UClass_UBlueprintCore.InnerSingleton,
               StaticRegisterNativesUBlueprintCore,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCore>,InternalVTableHelperCtorCaller<UBlueprintCore>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCore.InnerSingleton;
}

// UBlueprintCore @ 14725d3b0

UBlueprintCore * __thiscall
UBlueprintCore::UBlueprintCore(UBlueprintCore *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlueprintCore__6B_;
  (this->SkeletonGeneratedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GeneratedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlueprintGuid).A = 0;
  (this->BlueprintGuid).B = 0;
  (this->BlueprintGuid).C = 0;
  (this->BlueprintGuid).D = 0;
  return this;
}

// ~UBlueprintCore @ 14725df50

void __thiscall UBlueprintCore::~UBlueprintCore(UBlueprintCore *this)

{
  this->_padding_ = (longlong)&___7UBlueprintCore__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472609c0

UClass * __cdecl UBlueprintCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintCore",
               &Z_Registration_Info_UClass_UBlueprintCore.InnerSingleton,
               StaticRegisterNativesUBlueprintCore,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCore>,InternalVTableHelperCtorCaller<UBlueprintCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCore.InnerSingleton;
}

// Serialize @ 147260d20

void __thiscall UBlueprintCore::Serialize(UBlueprintCore *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUBlueprintCore @ 147260fa0

void __cdecl UBlueprintCore::StaticRegisterNativesUBlueprintCore(void)

{
  return;
}

// UBlueprintCore @ 1476884d0

UBlueprintCore * __thiscall
UBlueprintCore::UBlueprintCore(UBlueprintCore *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bLegacyNeedToPurgeSkelRefs = true;
  this->_padding_ = (longlong)&___7UBlueprintCore__6B_;
  (this->SkeletonGeneratedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GeneratedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlueprintGuid).A = 0;
  (this->BlueprintGuid).B = 0;
  (this->BlueprintGuid).C = 0;
  (this->BlueprintGuid).D = 0;
  return this;
}

// GenerateDeterministicGuid @ 1476aa770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UBlueprintCore::GenerateDeterministicGuid(UBlueprintCore *this)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStackY_68 [32];
  FString local_38;
  uchar local_28 [4];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
  ::FString::Shrink(&local_38);
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if ((iVar4 == 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<961926507976982875>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Blueprint.cpp"
                         ,0x15b,"HashString.Len()"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = local_38.Data.ArrayNum + -1;
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::HashBuffer(FVar2.Data,(ulonglong)(uint)(iVar4 * 2),local_28);
  (this->BlueprintGuid).A = local_24;
  (this->BlueprintGuid).B = local_20;
  (this->BlueprintGuid).C = local_1c;
  (this->BlueprintGuid).D = local_18;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 1476c62a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBlueprintCore::Serialize(UBlueprintCore *this,FArchive *param_1)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 auStackY_98 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  undefined8 local_48;
  uchar local_40 [4];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  UObject::Serialize((UObject *)this,param_1);
  pUVar7 = (UClass *)0x0;
  iVar9 = 0;
  iVar4 = (int)*(undefined8 *)&param_1->field_0x40;
  if ((iVar4 < 0xf0) && (iVar4 != 0xdd)) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->SkeletonGeneratedClass);
    pUVar1 = (this->SkeletonGeneratedClass).Class.field0_0x0.DebugPtr;
    if ((pUVar1 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_UObject_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar4 = (int)pUVar5->_padding_;
      if (((int)pUVar1->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (pUVar1 = (this->SkeletonGeneratedClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0
         )) {
        pUVar6 = Z_Construct_UClass_UObject_NoRegister();
        pUVar5 = pUVar7;
        if (pUVar6 != (UClass *)0x0) {
          iVar4 = (int)pUVar6->_padding_;
          if (((int)pUVar1->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar5 = (this->SkeletonGeneratedClass).Class.field0_0x0.DebugPtr;
          }
        }
        UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar5,RF_Transient);
        pUVar1 = (this->SkeletonGeneratedClass).Class.field0_0x0.DebugPtr;
        local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ArrayNum = 0;
        local_68.ArrayMax = 0;
        pUVar5 = pUVar7;
        if ((pUVar1 != (UClass *)0x0) &&
           (pUVar6 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 != (UClass *)0x0)) {
          iVar4 = (int)pUVar6->_padding_;
          if (((int)pUVar1->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar5 = (this->SkeletonGeneratedClass).Class.field0_0x0.DebugPtr;
          }
        }
        GetObjectsWithOuter((UObjectBase *)pUVar5,&local_68,true,RF_NoFlags,Borrowed);
        while ((iVar4 = (int)pUVar7, -1 < iVar4 && (iVar4 < local_68.ArrayNum))) {
          UObjectBase::AtomicallySetFlags
                    (*(UObjectBase **)(local_68.AllocatorInstance.Data + (longlong)iVar4 * 8),
                     RF_Transient);
          pUVar7 = (UClass *)(ulonglong)(iVar4 + 1);
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
      }
    }
    if (this != (UBlueprintCore *)0x0) {
      pUVar7 = UBlueprint::StaticClass();
      iVar4 = (int)pUVar7->_padding_;
      if ((((iVar4 <= *(int *)(this->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar7->_padding_)) && ((param_1->field_0x28 & 1) != 0)) &&
         ((this[1]._padding_ & 0x200) != 0)) {
        local_48 = 0;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_48);
        goto LAB_1476c64a2;
      }
    }
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->GeneratedClass);
  }
LAB_1476c64a2:
  if (((param_1->field_0x28 & 1) != 0) &&
     ((((this->BlueprintGuid).D == 0 && (this->BlueprintGuid).C == 0) &&
      (this->BlueprintGuid).B == 0) && (this->BlueprintGuid).A == 0)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
    ::FString::Shrink(&local_58);
    if (((local_58.Data.ArrayNum == 0) || (local_58.Data.ArrayNum == 1)) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<961926507976982875>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Blueprint.cpp"
                           ,0x15b,"HashString.Len()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_58.Data.ArrayNum != 0) {
      iVar9 = local_58.Data.ArrayNum + -1;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FSHA1::HashBuffer(FVar8.Data,(ulonglong)(uint)(iVar9 * 2),local_40);
    (this->BlueprintGuid).A = local_3c;
    (this->BlueprintGuid).B = local_38;
    (this->BlueprintGuid).C = local_34;
    (this->BlueprintGuid).D = local_30;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

