// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 24

// IsRelatedTo @ 146e92d50

bool __thiscall UBlackboardData::IsRelatedTo(UBlackboardData *this,UBlackboardData *param_1)

{
  UBlackboardData *this_00;
  UBlackboardData *pUVar1;
  bool bVar2;
  
  if (((this == param_1) || (bVar2 = IsChildOf(this,param_1), bVar2)) ||
     (bVar2 = IsChildOf(param_1,this), bVar2)) {
    return true;
  }
  this_00 = (this->Parent).field0_0x0.DebugPtr;
  if (((this_00 != (UBlackboardData *)0x0) &&
      (pUVar1 = (param_1->Parent).field0_0x0.DebugPtr, pUVar1 != (UBlackboardData *)0x0)) &&
     (bVar2 = IsRelatedTo(this_00,pUVar1), bVar2)) {
    return true;
  }
  return false;
}

// StaticClass @ 146eaf550

UClass * __cdecl UBlackboardData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardData",
               &Z_Registration_Info_UClass_UBlackboardData.InnerSingleton,
               StaticRegisterNativesUBlackboardData,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlackboardData>,InternalVTableHelperCtorCaller<UBlackboardData>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardData.InnerSingleton;
}

// UpdatePersistentKey<UBlackboardKeyType_Object> @ 146ec4170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBlackboardKeyType_Object * __thiscall
UBlackboardData::UpdatePersistentKey<UBlackboardKeyType_Object>
          (UBlackboardData *this,FName *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  FName FVar8;
  UBlackboardKeyType_Object *pUVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStackY_108 [32];
  FName local_b8;
  FName local_b0;
  FName local_a8;
  uint local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  InternalGetKeyID(this,&local_b8,(EKeyLookupMode)param_1);
  if ((ushort)local_b8.ComparisonIndex.Value == 0xffff) {
    if ((this->Parent).field0_0x0.DebugPtr == (UBlackboardData *)0x0) {
      local_b0 = *param_1;
      local_a0 = local_a0 & 0xfffffffe;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = UBlackboardKeyType_Object::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar7);
      local_98._8_8_ = this;
      FVar8 = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar10 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      pFVar2 = (FName *)(this->Keys).AllocatorInstance.Data;
      local_a8 = FVar8;
      if (((pFVar2 <= &local_b0) && (&local_b0 < pFVar2 + (longlong)(this->Keys).ArrayMax * 3)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar9 = (UBlackboardKeyType_Object *)(*pcVar3)();
        return pUVar9;
      }
      iVar5 = (this->Keys).ArrayNum;
      piVar1 = &(this->Keys).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(this->Keys).AllocatorInstance,piVar1);
      }
      (this->Keys).ArrayNum = iVar5 + 1;
      pFVar2 = (FName *)((this->Keys).AllocatorInstance.Data + (longlong)iVar5 * 0x18);
      *pFVar2 = local_b0;
      pFVar2[1] = local_a8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_a8);
      }
      pFVar2[2].ComparisonIndex.Value = pFVar2[2].ComparisonIndex.Value & 0xfffffffe | local_a0 & 1;
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
      PropagateKeyChangesToDerivedBlackboardAssets(this);
      return (UBlackboardKeyType_Object *)FVar8;
    }
  }
  else if ((this->Parent).field0_0x0.DebugPtr != (UBlackboardData *)0x0) {
    uVar6 = (uint)(ushort)local_b8.ComparisonIndex.Value - (uint)(this->FirstKeyID).Key;
    uVar11 = uVar6 & 0xffff;
    if (((uVar6 != uVar11) || ((int)uVar6 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UBlackboardKeyType_Object *)(*pcVar3)();
      return pUVar9;
    }
    if (((this->Keys).ArrayNum <= (int)uVar11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UBlackboardKeyType_Object *)(*pcVar3)();
      return pUVar9;
    }
    _Dst = (this->Keys).AllocatorInstance.Data + (ulonglong)uVar11 * 0x18;
    iVar5 = (this->Keys).ArrayNum + ~uVar11;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar5 * 0x18);
    }
    piVar1 = &(this->Keys).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    PropagateKeyChangesToDerivedBlackboardAssets(this);
  }
  return (UBlackboardKeyType_Object *)0x0;
}

// UBlackboardData @ 146ecbbd0

UBlackboardData * __thiscall
UBlackboardData::UBlackboardData(UBlackboardData *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardData__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keys).ArrayNum = 0;
  (this->Keys).ArrayMax = 0;
  (this->FirstKeyID).Key = 0xffff;
  return this;
}

// UBlackboardData @ 146ecbc10

UBlackboardData * __thiscall
UBlackboardData::UBlackboardData(UBlackboardData *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardData__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keys).ArrayNum = 0;
  (this->Keys).ArrayMax = 0;
  (this->FirstKeyID).Key = 0;
  return this;
}

// ~UBlackboardData @ 146ecdcb0

void __thiscall UBlackboardData::~UBlackboardData(UBlackboardData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBlackboardData__6B_;
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetKey @ 146ee5b00

FBlackboardEntry * __thiscall UBlackboardData::GetKey(UBlackboardData *this,FKey param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBlackboardEntry *pFVar5;
  uint uVar6;
  
  if (param_1.Key != 0xffff) {
    do {
      uVar1 = (this->FirstKeyID).Key;
      if (uVar1 <= param_1.Key) {
        uVar6 = (uint)param_1.Key - (uint)uVar1;
        uVar4 = 0;
        if ((int)uVar6 < (this->Keys).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FBlackboardEntry *)(*pcVar2)();
            return pFVar5;
          }
        }
        return (FBlackboardEntry *)
               ((this->Keys).AllocatorInstance.Data +
               ((ulonglong)param_1.Key - (ulonglong)uVar1) * 0x18);
      }
      this = (this->Parent).field0_0x0.DebugPtr;
    } while ((this != (UBlackboardData *)0x0) && (param_1.Key != 0xffff));
  }
  return (FBlackboardEntry *)0x0;
}

// GetKeyID @ 146ee5c20

FKey __thiscall UBlackboardData::GetKeyID(UBlackboardData *this,FName *param_1)

{
  EKeyLookupMode in_R8D;
  
  InternalGetKeyID(this,param_1,in_R8D);
  return (FKey)(ushort)param_1;
}

// GetKeyName @ 146ee5eb0

FName __thiscall UBlackboardData::GetKeyName(UBlackboardData *this,FKey param_1)

{
  FBlackboardEntry *pFVar1;
  undefined6 in_register_00000012;
  FName FVar2;
  FKey in_R8W;
  
  FVar2._2_6_ = in_register_00000012;
  FVar2.ComparisonIndex.Value._0_2_ = param_1.Key;
  pFVar1 = GetKey(this,in_R8W);
  if (pFVar1 != (FBlackboardEntry *)0x0) {
    *(FName *)FVar2 = pFVar1->EntryName;
    return FVar2;
  }
  *(FName *)FVar2 = (FName)0x0;
  return FVar2;
}

// GetKeyType @ 146ee6000

TSubclassOf<UBlackboardKeyType> __thiscall
UBlackboardData::GetKeyType(UBlackboardData *this,FKey param_1)

{
  UBlackboardKeyType *pUVar1;
  FBlackboardEntry *pFVar2;
  UObject *pUVar3;
  undefined6 in_register_00000012;
  TObjectPtr<UClass> TVar4;
  FKey in_R8W;
  
  TVar4.field0_0x0._2_6_ = in_register_00000012;
  TVar4.field0_0x0._0_2_ = param_1.Key;
  pFVar2 = GetKey(this,in_R8W);
  if ((pFVar2 == (FBlackboardEntry *)0x0) ||
     (pUVar1 = (pFVar2->KeyType).field0_0x0.DebugPtr, pUVar1 == (UBlackboardKeyType *)0x0)) {
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar3 = (UObject *)pUVar1->_padding_;
  }
  *(UObject **)TVar4.field0_0x0 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return (TSubclassOf<UBlackboardKeyType>)TVar4.field0_0x0;
}

// GetNumKeys @ 146ee6aa0

int __thiscall UBlackboardData::GetNumKeys(UBlackboardData *this)

{
  return (uint)(this->FirstKeyID).Key + (this->Keys).ArrayNum;
}

// GetPrivateStaticClass @ 146ee9c50

UClass * __cdecl UBlackboardData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardData",
               &Z_Registration_Info_UClass_UBlackboardData.InnerSingleton,
               StaticRegisterNativesUBlackboardData,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlackboardData>,InternalVTableHelperCtorCaller<UBlackboardData>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardData.InnerSingleton;
}

// InternalGetKeyID @ 146ef34c0

FKey __thiscall
UBlackboardData::InternalGetKeyID(UBlackboardData *this,FName *param_1,EKeyLookupMode param_2)

{
  UBlackboardData *this_00;
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FKey FVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined6 extraout_var;
  uint uVar7;
  longlong lVar8;
  undefined4 in_register_00000084;
  int in_R9D;
  FName local_res8;
  
  uVar7 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Keys).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (FKey)uVar3;
        }
      }
      if (*(longlong *)((this->Keys).AllocatorInstance.Data + lVar8) ==
          *(longlong *)CONCAT44(in_register_00000084,param_2)) {
        uVar7 = uVar7 + (this->FirstKeyID).Key;
        if ((uVar7 != (uVar7 & 0xffff)) || ((int)uVar7 < 0)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (FKey)uVar3;
          }
        }
        if ((short)uVar7 == -1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("FBlackboard::FKey(OffsetKey) != FBlackboard::InvalidKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardData.cpp"
                             ,0x6f,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (FKey)uVar3;
          }
        }
        FBlackboard::FKey::FKey((FKey *)param_1,uVar7);
        goto LAB_146ef3602;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((int)uVar7 < (this->Keys).ArrayNum);
  }
  this_00 = (this->Parent).field0_0x0.DebugPtr;
  if ((this_00 == (UBlackboardData *)0x0) || (in_R9D != 0)) {
    uVar5 = 0xffff;
  }
  else {
    FVar4 = InternalGetKeyID(this_00,&local_res8,param_2);
    uVar5 = *(undefined2 *)CONCAT62(extraout_var,FVar4.Key);
  }
  *(undefined2 *)&(param_1->ComparisonIndex).Value = uVar5;
LAB_146ef3602:
  return (FKey)(ushort)param_1;
}

// IsChildOf @ 146ef3920

bool __thiscall UBlackboardData::IsChildOf(UBlackboardData *this,UBlackboardData *param_1)

{
  UBlackboardData *pUVar1;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  while( true ) {
    if (pUVar1 == (UBlackboardData *)0x0) {
      return param_1 == (UBlackboardData *)0x0;
    }
    if (pUVar1 == param_1) break;
    pUVar1 = (pUVar1->Parent).field0_0x0.DebugPtr;
  }
  return true;
}

// IsKeyInstanceSynced @ 146ef3d60

bool __thiscall UBlackboardData::IsKeyInstanceSynced(UBlackboardData *this,FKey param_1)

{
  FBlackboardEntry *pFVar1;
  
  pFVar1 = GetKey(this,param_1);
  if (pFVar1 != (FBlackboardEntry *)0x0) {
    return pFVar1->bInstanceSynced;
  }
  return false;
}

// IsValid @ 146ef3fb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UBlackboardData::IsValid(UBlackboardData *this)

{
  UBlackboardData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  
  if (((this->Parent).field0_0x0.DebugPtr != (UBlackboardData *)0x0) &&
     (uVar5 = 0, 0 < (this->Keys).ArrayNum)) {
    do {
      this_00 = (this->Parent).field0_0x0.DebugPtr;
      uVar4 = 0;
      if ((int)uVar5 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      InternalGetKeyID(this_00,&local_res8,
                       (int)(this->Keys).AllocatorInstance.Data + (int)((longlong)(int)uVar5 * 0x18)
                      );
      if ((short)local_res8.ComparisonIndex.Value != -1) {
        if (2 < (byte)LogBehaviorTree._0_1_) {
          uVar4 = 0;
          if ((int)uVar5 < (this->Keys).ArrayNum) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          ::FName::ToString((FName *)((this->Keys).AllocatorInstance.Data +
                                     (longlong)(int)uVar5 * 0x18),&local_48);
          local_res10 = (FName)this->_padding_;
          ::FName::ToString(&local_res10,&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        return false;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->Keys).ArrayNum);
  }
  return true;
}

// PostInitProperties @ 146efb110

void __thiscall UBlackboardData::PostInitProperties(UBlackboardData *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x1010) == 0) {
    UpdatePersistentKeys(this);
    return;
  }
  return;
}

// PostLoad @ 146efb9a0

void __thiscall UBlackboardData::PostLoad(UBlackboardData *this)

{
  UBlackboardData *this_00;
  
  UObject::PostLoad((UObject *)this);
  this_00 = (this->Parent).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  UpdateParentKeys(this);
  UpdateIfHasSynchronizedKeys(this);
  return;
}

// PropagateKeyChangesToDerivedBlackboardAssets @ 146efbc80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBlackboardData::PropagateKeyChangesToDerivedBlackboardAssets(UBlackboardData *this)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UBlackboardData> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UBlackboardData>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(UBlackboardData **)
         (*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x30) ==
        (UBlackboardData *)0x0) {
      bVar2 = this == (UBlackboardData *)0x0;
    }
    else {
      bVar2 = *(UBlackboardData **)
               (*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x30) ==
              this;
    }
    if (bVar2) {
      lVar6 = (longlong)local_28.Index;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UpdateParentKeys(*(UBlackboardData **)
                        (local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8));
      lVar6 = (longlong)local_28.Index;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UpdateIfHasSynchronizedKeys
                (*(UBlackboardData **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8));
      lVar6 = (longlong)local_28.Index;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      PropagateKeyChangesToDerivedBlackboardAssets
                (*(UBlackboardData **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8));
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUBlackboardData @ 146f00fd0

void __cdecl UBlackboardData::StaticRegisterNativesUBlackboardData(void)

{
  return;
}

// UpdateDeprecatedKeys @ 146f03810

void __thiscall UBlackboardData::UpdateDeprecatedKeys(UBlackboardData *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Keys).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Keys).AllocatorInstance.Data;
      plVar2 = *(longlong **)(pFVar1 + lVar8 + 8);
      if ((plVar2 != (longlong *)0x0) &&
         (pUVar6 = (UObject *)(**(code **)(*plVar2 + 0x2d0))(), pUVar6 != (UObject *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)(pFVar1 + lVar8 + 8) = pUVar6;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((int)uVar7 < (this->Keys).ArrayNum);
  }
  return;
}

// UpdateIfHasSynchronizedKeys @ 146f03900

void __thiscall UBlackboardData::UpdateIfHasSynchronizedKeys(UBlackboardData *this)

{
  longlong lVar1;
  UBlackboardData *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  pUVar2 = (this->Parent).field0_0x0.DebugPtr;
  if ((pUVar2 == (UBlackboardData *)0x0) || (pUVar2->bHasSynchronizedKeys == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  uVar8 = 0;
  uVar5 = *(uint *)&this->field_0x48 & 0xfffffffe | uVar6;
  this->bHasSynchronizedKeys = uVar6;
  if (0 < (this->Keys).ArrayNum) {
    lVar7 = 0;
    do {
      if ((uVar5 & 1) != 0) {
        return;
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->Keys).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar1 = lVar7 + 0x10;
      lVar7 = lVar7 + 0x18;
      uVar5 = (ZPULL(*(undefined4 *)&this->field_0x48,0,1) |
              *(uint *)((this->Keys).AllocatorInstance.Data + lVar1)) & 1 ^
              *(undefined4 *)&this->field_0x48 & 0xfffffffe;
      *(uint *)&this->field_0x48 = uVar5;
    } while ((int)uVar8 < (this->Keys).ArrayNum);
  }
  return;
}

// UpdateKeyIDs @ 146f039d0

void __thiscall UBlackboardData::UpdateKeyIDs(UBlackboardData *this)

{
  UBlackboardData *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 == (UBlackboardData *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)(pUVar1->FirstKeyID).Key + (pUVar1->Keys).ArrayNum;
  }
  if (((uVar4 != (uVar4 & 0xffff)) || ((int)uVar4 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((ushort)uVar4 == 0xffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FBlackboard::FKey(FirstKeyIDInt) != FBlackboard::InvalidKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardData.cpp"
                         ,0x11f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((uVar4 != (uVar4 & 0xffff)) || ((int)uVar4 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->FirstKeyID).Key = (ushort)uVar4;
  return;
}

// UpdateParentKeys @ 146f03e70

void __thiscall UBlackboardData::UpdateParentKeys(UBlackboardData *this)

{
  UBlackboardData *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  FDestructionSentinel local_28;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 == (UBlackboardData *)0x0) {
    bVar8 = this == (UBlackboardData *)0x0;
  }
  else {
    bVar8 = pUVar1 == this;
  }
  if (bVar8) {
    (this->Parent).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  }
  UpdateKeyIDs(this);
  UpdatePersistentKeys(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnUpdateKeys,
             (FWriteAccessScope *)&local_28);
  bVar8 = false;
  OnUpdateKeys._28_4_ = OnUpdateKeys._28_4_ + 1;
  uVar6 = OnUpdateKeys._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar8 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)OnUpdateKeys._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + OnUpdateKeys._8_8_) == 0) ||
          (*(longlong **)(lVar7 + OnUpdateKeys._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + OnUpdateKeys._8_8_) + 0x68))(), cVar4 == '\0'
         )) {
        bVar8 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  OnUpdateKeys._28_4_ = OnUpdateKeys._28_4_ + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnUpdateKeys,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

