// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// TBaseKeyIterator<1> @ 1475a3a70

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
          *param_1,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> param_2)

{
  bool bVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  this->Set = param_1;
  (this->Key).WeakPtr = param_2.WeakPtr;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(param_2.WeakPtr.ObjectSerialNumber ^ param_2.WeakPtr.ObjectIndex) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar2;
    this->Index = iVar2;
    if (iVar2 != -1) {
      while( true ) {
        local_res8 = (this->Key).WeakPtr;
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x18 + (longlong)iVar2 * 0x20);
        local_res10[0] =
             *(FWeakObjectPtr *)((longlong)iVar2 * 0x20 + *(longlong *)&this->Set->Elements);
        bVar1 = TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>::UEOpEquals<USkeleton_const_,bool>
                          ((TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> *)local_res10,
                           (TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> *)&local_res8);
        if (bVar1) break;
        iVar2 = this->NextIndex;
        this->Index = iVar2;
        if (iVar2 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 147928070

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
          *param_1,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> param_2)

{
  bool bVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  this->Set = param_1;
  (this->Key).WeakPtr = param_2.WeakPtr;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(param_2.WeakPtr.ObjectSerialNumber ^ param_2.WeakPtr.ObjectIndex) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar2;
    this->Index = iVar2;
    if (iVar2 != -1) {
      while( true ) {
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x10 + (longlong)iVar2 * 0x18);
        local_res8 = (this->Key).WeakPtr;
        local_res10[0] =
             *(FWeakObjectPtr *)((longlong)iVar2 * 0x18 + *(longlong *)&this->Set->Elements);
        bVar1 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                          ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)local_res10,
                           (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res8);
        if (bVar1) break;
        iVar2 = this->NextIndex;
        this->Index = iVar2;
        if (iVar2 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 147f640d0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FString,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FString,FShaderPipeline_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FString,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FString,FShaderPipeline_*,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FString_const_> param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  bool bVar8;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    iVar1 = ((param_2.Ref)->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    FVar6 = (param_1->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        lVar7 = (longlong)iVar4 * 0x20;
        this->NextIndex = *(int *)(*(longlong *)&this->Set->Elements + 0x18 + lVar7);
        lVar2 = *(longlong *)&this->Set->Elements;
        iVar4 = (this->Key->Data).ArrayNum;
        iVar1 = *(int *)(lVar2 + 8 + lVar7);
        if (iVar1 == iVar4) {
          if (iVar1 < 2) {
            return this;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar2 + lVar7),
                             (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
          bVar8 = iVar4 == 0;
        }
        else {
          bVar8 = iVar1 + iVar4 == 1;
        }
        if (bVar8) break;
        iVar4 = this->NextIndex;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
      return this;
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 147f641d0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FString_const_> param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    iVar2 = ((param_2.Ref)->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar6 = L"";
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    FVar7 = (param_1->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar4) * 4
                    );
    this->NextIndex = iVar5;
    this->Index = iVar5;
    if (iVar5 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar5 * 0x28;
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x20 + (longlong)iVar5 * 0x28);
        lVar3 = *(longlong *)&this->Set->Elements;
        iVar5 = (this->Key->Data).ArrayNum;
        iVar2 = *(int *)(lVar3 + 8 + lVar1);
        if (iVar2 == iVar5) {
          if (iVar2 < 2) {
            return this;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + lVar1),
                             (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
          bVar8 = iVar5 == 0;
        }
        else {
          bVar8 = iVar2 + iVar5 == 1;
        }
        if (bVar8) break;
        iVar5 = this->NextIndex;
        this->Index = iVar5;
        if (iVar5 == -1) {
          return this;
        }
      }
      return this;
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 147fa3240

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialParameterCollectionInstanceResource_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialParameterCollectionInstanceResource_*,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FGuid_const_> param_2)

{
  FGuid *pFVar1;
  ulong64 uVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar2 = CityHash64((char *)param_2.Ref,0x10);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar2) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar1 = this->Key;
      while( true ) {
        lVar3 = (longlong)iVar6;
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x18 + lVar3 * 0x20);
        this->NextIndex = iVar6;
        puVar5 = (uint *)(*(longlong *)&this->Set->Elements + lVar3 * 0x20);
        if (((puVar5[2] == pFVar1->C && puVar5[1] == pFVar1->B) && puVar5[3] == pFVar1->D) &&
            pFVar1->A == *puVar5) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 148a40990

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FString,FPackageNameAndLODIndex>,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FString,FPackageNameAndLODIndex>,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FString_const_> param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    iVar1 = ((param_2.Ref)->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar6 = L"";
      iVar4 = 0;
    }
    else {
      pwVar6 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
    FVar7 = (param_1->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        lVar5 = (longlong)iVar4;
        this->NextIndex = *(int *)(*(longlong *)&this->Set->Elements + 0x28 + lVar5 * 0x30);
        lVar2 = *(longlong *)&this->Set->Elements;
        iVar4 = (this->Key->Data).ArrayNum;
        iVar1 = *(int *)(lVar2 + 8 + lVar5 * 0x30);
        if (iVar1 == iVar4) {
          if (iVar1 < 2) {
            return this;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar2 + lVar5 * 0x30),
                             (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
          bVar8 = iVar4 == 0;
        }
        else {
          bVar8 = iVar1 + iVar4 == 1;
        }
        if (bVar8) break;
        iVar4 = this->NextIndex;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
      return this;
    }
  }
  return this;
}

