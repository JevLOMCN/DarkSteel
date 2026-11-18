// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 13

// StaticClass @ 145f66740

UClass * __cdecl ULandscapeInfoMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeInfoMap",
               &Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton,
               StaticRegisterNativesULandscapeInfoMap,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeInfoMap>,
               InternalVTableHelperCtorCaller<ULandscapeInfoMap>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton;
}

// ULandscapeInfoMap @ 145f7b9d0

ULandscapeInfoMap * __thiscall
ULandscapeInfoMap::ULandscapeInfoMap(ULandscapeInfoMap *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeInfoMap__6B_;
  *(undefined8 *)&this->Map = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ULandscapeInfoMap @ 145f7ba30

ULandscapeInfoMap * __thiscall
ULandscapeInfoMap::ULandscapeInfoMap(ULandscapeInfoMap *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeInfoMap__6B_;
  *(undefined8 *)&this->Map = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~ULandscapeInfoMap @ 145f7e360

void __thiscall ULandscapeInfoMap::~ULandscapeInfoMap(ULandscapeInfoMap *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeInfoMap__6B_;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 145f812e0

void __cdecl ULandscapeInfoMap::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULandscapeInfoMap>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    FReferenceCollector::
    AddReferencedObjects<FGuid,ULandscapeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
              (param_2,(TMapBase<FGuid,TObjectPtr<ULandscapeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
                        *)(param_1 + 1),param_1,(FProperty *)0x0);
    return;
  }
  pFVar3 = GetTypeName<ULandscapeInfoMap>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// BeginDestroy @ 145f827a0

void __thiscall ULandscapeInfoMap::BeginDestroy(ULandscapeInfoMap *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  ULandscapeInfoMap *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ULandscapeInfoMap *local_38 [2];
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
    local_38[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULandscapeInfoMap *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (((*(ULandscapeInfoMap ***)&pUVar5[3].field_0x8 <= local_38) &&
        (local_38 < *(ULandscapeInfoMap ***)&pUVar5[3].field_0x8 + *(int *)&pUVar5[3].field_0x14))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&pUVar5[3].field_0x10;
    if (iVar1 != 0) {
      iVar10 = 0;
      plVar2 = *(longlong **)&pUVar5[3].field_0x8;
      bVar4 = (ULandscapeInfoMap *)*plVar2 != local_38[0];
      lVar7 = 0;
      pUVar6 = local_38[0];
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar4 == ((ULandscapeInfoMap *)plVar2[lVar7] != pUVar6));
        if (bVar4 != false) {
          if (iVar10 != iVar8) {
            memmove(plVar2 + iVar10,plVar2 + iVar8,(longlong)(iVar9 - iVar8) << 3);
            pUVar6 = local_38[0];
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < iVar1);
      *(int *)&pUVar5[3].field_0x10 = iVar10;
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// FindLandscapeInfoMap @ 145f8d0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeInfoMap * __cdecl ULandscapeInfoMap::FindLandscapeInfoMap(UWorld *param_1)

{
  ULandscapeInfoMap *local_res8 [4];
  
  local_res8[0] = (ULandscapeInfoMap *)0x0;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::FindItemByClass<ULandscapeInfoMap>
            (&param_1->PerModuleDataObjects,local_res8,(int *)0x0,0);
  return local_res8[0];
}

// GetLandscapeInfoMap @ 145f926d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeInfoMap * __cdecl ULandscapeInfoMap::GetLandscapeInfoMap(UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  ULandscapeInfoMap *pUVar3;
  ULandscapeInfoMap *local_res8 [4];
  
  local_res8[0] = (ULandscapeInfoMap *)0x0;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::FindItemByClass<ULandscapeInfoMap>
            (&param_1->PerModuleDataObjects,local_res8,(int *)0x0,0);
  if (local_res8[0] == (ULandscapeInfoMap *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FoundObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeInfoMap.cpp"
                       ,0x37,L"ULandscapInfoMap object was not created for this UWorld.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (ULandscapeInfoMap *)(*pcVar1)();
      return pUVar3;
    }
  }
  return local_res8[0];
}

// GetPrivateStaticClass @ 145f93990

UClass * __cdecl ULandscapeInfoMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeInfoMap",
               &Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton,
               StaticRegisterNativesULandscapeInfoMap,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeInfoMap>,
               InternalVTableHelperCtorCaller<ULandscapeInfoMap>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton;
}

// PostDuplicate @ 145f9be70

void __thiscall ULandscapeInfoMap::PostDuplicate(ULandscapeInfoMap *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Map.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeInfoMap.cpp"
                       ,0x13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Serialize @ 145fa1b60

void __thiscall ULandscapeInfoMap::Serialize(ULandscapeInfoMap *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x2b & 1) != 0) {
    TSetPrivateFriend::
    Serialize<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
                        *)&this->Map);
  }
  return;
}

// Serialize @ 145fa1ba0

void __thiscall
ULandscapeInfoMap::Serialize(ULandscapeInfoMap *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if ((pFVar1->field_0x2b & 1) != 0) {
    TSetPrivateFriend::
    Serialize<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
              (pFVar1,(TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
                       *)&this->Map);
  }
  return;
}

// StaticRegisterNativesULandscapeInfoMap @ 145fa47b0

void __cdecl ULandscapeInfoMap::StaticRegisterNativesULandscapeInfoMap(void)

{
  return;
}

