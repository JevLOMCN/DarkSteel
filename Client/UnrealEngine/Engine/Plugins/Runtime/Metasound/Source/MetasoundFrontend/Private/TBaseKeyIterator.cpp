// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// TBaseKeyIterator<1> @ 14ad92690

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
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

// TBaseKeyIterator<0> @ 14ad92790

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
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

// TBaseKeyIterator<1> @ 14addc060

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
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
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x50 + lVar3 * 0x58);
        this->NextIndex = iVar6;
        puVar5 = (uint *)(*(longlong *)&this->Set->Elements + lVar3 * 0x58);
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

// TBaseKeyIterator<1> @ 14ae1a390

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
          *param_1,FMetasoundFrontendGraphClass *param_2)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar4;
        iVar4 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + lVar1 * 0x18);
        this->NextIndex = iVar4;
        if (*(FMetasoundFrontendGraphClass **)(*(longlong *)&param_1->Elements + lVar1 * 0x18) ==
            param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 14ae57320

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FMetasoundFrontendClassName_const_> param_2)

{
  FName *pFVar1;
  FMetasoundFrontendClassName *pFVar2;
  uint uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar3 = ::GetTypeHash(param_2.Ref);
    FVar5 = (param_1->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar2 = this->Key;
      while( true ) {
        lVar4 = (longlong)iVar6;
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x20 + lVar4 * 0x28);
        this->NextIndex = iVar6;
        pFVar1 = (FName *)(*(longlong *)&this->Set->Elements + lVar4 * 0x28);
        if (((*pFVar1 == pFVar2->Namespace) && (pFVar1[1] == pFVar2->Name)) &&
           (pFVar1[2] == pFVar2->Variant)) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 14ae57400

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<Metasound::Frontend::FNodeClassRegistryKey_const_> param_2)

{
  FNodeClassRegistryKey *pFVar1;
  longlong lVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar3 = Metasound::Frontend::GetTypeHash(param_2.Ref);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar1 = this->Key;
      while( true ) {
        lVar5 = (longlong)iVar6 * 0x40;
        iVar6 = *(int *)(lVar5 + 0x38 + *(longlong *)&this->Set->Elements);
        this->NextIndex = iVar6;
        lVar2 = *(longlong *)&this->Set->Elements;
        if ((((*(EMetasoundFrontendClassType *)(lVar5 + lVar2) == pFVar1->Type) &&
             (*(FName *)(lVar5 + 4 + lVar2) == (pFVar1->ClassName).Namespace)) &&
            (*(FName *)(lVar5 + 0xc + lVar2) == (pFVar1->ClassName).Name)) &&
           (((*(FName *)(lVar5 + 0x14 + lVar2) == (pFVar1->ClassName).Variant &&
             (*(int *)(lVar5 + 0x1c + lVar2) == (pFVar1->Version).Major)) &&
            (*(int *)(lVar5 + 0x20 + lVar2) == (pFVar1->Version).Minor)))) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14ae57500

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<Metasound::Frontend::FNodeClassRegistryKey_const_> param_2)

{
  FNodeClassRegistryKey *pFVar1;
  longlong lVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar3 = Metasound::Frontend::GetTypeHash(param_2.Ref);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar1 = this->Key;
      while( true ) {
        lVar5 = (longlong)iVar6 * 0x40;
        iVar6 = *(int *)(lVar5 + 0x38 + *(longlong *)&this->Set->Elements);
        this->NextIndex = iVar6;
        lVar2 = *(longlong *)&this->Set->Elements;
        if ((((*(EMetasoundFrontendClassType *)(lVar5 + lVar2) == pFVar1->Type) &&
             (*(FName *)(lVar5 + 4 + lVar2) == (pFVar1->ClassName).Namespace)) &&
            (*(FName *)(lVar5 + 0xc + lVar2) == (pFVar1->ClassName).Name)) &&
           (((*(FName *)(lVar5 + 0x14 + lVar2) == (pFVar1->ClassName).Variant &&
             (*(int *)(lVar5 + 0x1c + lVar2) == (pFVar1->Version).Major)) &&
            (*(int *)(lVar5 + 0x20 + lVar2) == (pFVar1->Version).Minor)))) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

