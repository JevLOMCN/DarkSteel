// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 24

// StaticStruct @ 1443df880

UScriptStruct * __cdecl FDataflowSelection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSelection.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelection,(UObject *)pUVar1,
                         L"DataflowSelection");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSelection.OuterSingleton;
}

// FDataflowSelection @ 14442ef60

FDataflowSelection * __thiscall
FDataflowSelection::FDataflowSelection(FDataflowSelection *this,FDataflowSelection *param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  this->GroupName = param_1->GroupName;
  (this->SelectionArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if ((param_1->SelectionArray).AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0
     ) {
    memmove(&this->SelectionArray,&param_1->SelectionArray,0x10);
  }
  FVar1 = (this->SelectionArray).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->SelectionArray).AllocatorInstance.SecondaryData =
       (param_1->SelectionArray).AllocatorInstance.SecondaryData;
  (param_1->SelectionArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SelectionArray).NumBits = (param_1->SelectionArray).NumBits;
  (this->SelectionArray).MaxBits = (param_1->SelectionArray).MaxBits;
  (param_1->SelectionArray).NumBits = 0;
  (param_1->SelectionArray).MaxBits = 0;
  return this;
}

// FDataflowSelection @ 14442eff0

FDataflowSelection * __thiscall
FDataflowSelection::FDataflowSelection(FDataflowSelection *this,FDataflowSelection *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  
  this->GroupName = param_1->GroupName;
  (this->SelectionArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SelectionArray).NumBits = 0;
  (this->SelectionArray).MaxBits = 0;
  uVar3 = (param_1->SelectionArray).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar3) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    (this->SelectionArray).MaxBits = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->SelectionArray,0);
  }
  iVar1 = (param_1->SelectionArray).NumBits;
  (this->SelectionArray).NumBits = iVar1;
  if (iVar1 != 0) {
    _Src = (param_1->SelectionArray).AllocatorInstance.SecondaryData;
    _Dst = (this->SelectionArray).AllocatorInstance.SecondaryData;
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      _Src = (ForElementType<unsigned_int>)&param_1->SelectionArray;
    }
    if (_Dst == (ForElementType<unsigned_int>)0x0) {
      _Dst = (ForElementType<unsigned_int>)&this->SelectionArray;
    }
    memcpy((void *)_Dst,(void *)_Src,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return this;
}

// AND @ 144436b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDataflowSelection::AND
          (FDataflowSelection *this,FDataflowSelection *param_1,FDataflowSelection *param_2)

{
  ForElementType<unsigned_int> FVar1;
  undefined1 auStackY_68 [32];
  <lambda_1> local_38 [8];
  TBitArray<FDefaultBitArrayAllocator> local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  local_30.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_30.NumBits = 0;
  local_30.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (&this->SelectionArray,&param_1->SelectionArray,&local_30,MaxSize,local_38);
  if (&param_2->SelectionArray != &local_30) {
    if (local_30.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(param_2->SelectionArray).AllocatorInstance.InlineData =
           local_30.AllocatorInstance.InlineData._0_8_;
      *(undefined8 *)((param_2->SelectionArray).AllocatorInstance.InlineData + 8) =
           local_30.AllocatorInstance.InlineData._8_8_;
    }
    FVar1 = (param_2->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (param_2->SelectionArray).AllocatorInstance.SecondaryData =
         local_30.AllocatorInstance.SecondaryData;
    (param_2->SelectionArray).NumBits = local_30.NumBits;
    (param_2->SelectionArray).MaxBits = local_30.MaxBits;
    local_30.NumBits = 0;
    local_30.MaxBits = 0;
    local_30.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  }
  if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_30.AllocatorInstance.SecondaryData);
  }
  return;
}

// AnySelected @ 1444375f0

bool __thiscall FDataflowSelection::AnySelected(FDataflowSelection *this)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = (this->SelectionArray).NumBits;
  iVar6 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (0 < iVar1) {
    FVar2 = (this->SelectionArray).AllocatorInstance.SecondaryData;
    do {
      FVar5 = (ForElementType<unsigned_int>)&this->SelectionArray;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar5 = FVar2;
      }
      if ((*(uint *)((longlong)FVar5 + (longlong)iVar6 * 4) & uVar7) != 0) {
        return true;
      }
      uVar3 = uVar7 * 2;
      iVar8 = iVar8 + 1;
      iVar4 = iVar6 + 1;
      if (uVar3 != 0) {
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      uVar7 = 1;
      if (uVar3 != 0) {
        uVar7 = uVar3;
      }
    } while (iVar8 < iVar1);
  }
  return false;
}

// AsArray @ 144437a20

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowSelection::AsArray
          (FDataflowSelection *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  uint local_18 [4];
  
  uVar9 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar6 = (this->SelectionArray).NumBits;
  if (0 < iVar6) {
    do {
      local_18[0] = uVar9;
      if ((((int)uVar9 < 0) || (iVar6 <= (int)uVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      FVar1 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)&this->SelectionArray;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar1;
      }
      uVar5 = uVar9;
      if ((int)uVar9 < 0) {
        uVar5 = uVar9 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)
      {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             local_18[0];
      }
      iVar6 = (this->SelectionArray).NumBits;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar6);
  }
  return __return_storage_ptr__;
}

// AsArray @ 144437b80

void __thiscall
FDataflowSelection::AsArray
          (FDataflowSelection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  uint local_18 [4];
  
  uVar6 = (this->SelectionArray).NumBits;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  uVar9 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar7 = (this->SelectionArray).NumBits;
  if (0 < iVar7) {
    do {
      local_18[0] = uVar9;
      if ((((int)uVar9 < 0) || (iVar7 <= (int)uVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)&this->SelectionArray;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar2;
      }
      uVar6 = uVar9;
      if ((int)uVar9 < 0) {
        uVar6 = uVar9 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)
      {
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar7 + 1;
        *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
      }
      iVar7 = (this->SelectionArray).NumBits;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// AsArrayValidated @ 144437d20

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowSelection::AsArrayValidated
          (FDataflowSelection *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FManagedArrayCollection *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AsArrayValidated(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AsArrayValidated @ 144437d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDataflowSelection::AsArrayValidated
          (FDataflowSelection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FManagedArrayCollection *param_2)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  uint uVar9;
  uint local_18 [4];
  
  iVar6 = (this->SelectionArray).NumBits;
  iVar5 = FManagedArrayCollection::NumElements(param_2,this->GroupName);
  if (iVar6 == iVar5) {
    AsArray(this,param_1);
  }
  else {
    iVar6 = FManagedArrayCollection::NumElements(param_2,this->GroupName);
    if (2 < (byte)LogChaosDataflow._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
    }
    iVar5 = (this->SelectionArray).NumBits;
    if (iVar6 < iVar5) {
      iVar5 = iVar6;
    }
    local_18[0] = 0;
    if (0 < iVar5) {
      do {
        uVar9 = local_18[0];
        if (((int)local_18[0] < 0) || ((this->SelectionArray).NumBits <= (int)local_18[0])) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar1 = (this->SelectionArray).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<unsigned_int>)&this->SelectionArray;
        if (FVar1 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar1;
        }
        uVar8 = uVar9 & 0x1f;
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar7 + (longlong)((int)uVar9 >> 5) * 4) >> uVar8 & 1) != 0) {
          pFVar2 = (param_1->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
             ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)param_1->ArrayMax * 4)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar6 = param_1->ArrayNum;
          if (iVar6 == param_1->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar6 + 1;
          *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
        }
        local_18[0] = local_18[0] + 1;
      } while ((int)local_18[0] < iVar5);
    }
  }
  return;
}

// Clear @ 144438630

void __thiscall FDataflowSelection::Clear(FDataflowSelection *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  
  iVar3 = (this->SelectionArray).NumBits;
  this_00 = &this->SelectionArray;
  (this->SelectionArray).NumBits = iVar3;
  uVar2 = iVar3 + 0x1f;
  uVar5 = uVar2 >> 5;
  if (uVar2 >> 5 != 0) {
    if ((this->SelectionArray).MaxBits + 0x1fU >> 5 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar5,4);
      (this->SelectionArray).MaxBits = uVar5 << 5;
    }
    FVar4 = (this->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar4,0,(ulonglong)uVar5 << 2);
    iVar3 = (this->SelectionArray).NumBits;
    uVar5 = iVar3 >> 0x1f & 0x1f;
    uVar2 = iVar3 + uVar5;
    iVar3 = (uVar2 & 0x1f) - uVar5;
    if (iVar3 != 0) {
      FVar4 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar4 + (longlong)((int)uVar2 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  return;
}

// InitFromArray @ 144450340

bool __thiscall
FDataflowSelection::InitFromArray
          (FDataflowSelection *this,FManagedArrayCollection *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  bool bVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = &this->SelectionArray;
  iVar3 = FManagedArrayCollection::NumElements(param_1,this->GroupName);
  (this->SelectionArray).NumBits = iVar3;
  uVar6 = iVar3 + 0x1fU >> 5;
  if (iVar3 + 0x1fU >> 5 != 0) {
    if ((this->SelectionArray).MaxBits + 0x1fU >> 5 < uVar6) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar6,4);
      (this->SelectionArray).MaxBits = uVar6 << 5;
    }
    FVar4 = (this->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar4,0,(ulonglong)uVar6 << 2);
    iVar3 = (this->SelectionArray).NumBits;
    uVar5 = iVar3 >> 0x1f & 0x1f;
    uVar6 = iVar3 + uVar5;
    iVar3 = (uVar6 & 0x1f) - uVar5;
    if (iVar3 != 0) {
      FVar4 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar4 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  bVar2 = SetFromArray(this,param_2);
  return bVar2;
}

// Initialize @ 144450510

void __thiscall FDataflowSelection::Initialize(FDataflowSelection *this,FDataflowSelection *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<unsigned_int> this_00;
  ForElementType<unsigned_int> _Src;
  
  this_00 = (ForElementType<unsigned_int>)&this->SelectionArray;
  if (this_00 == (ForElementType<unsigned_int>)&param_1->SelectionArray) {
    return;
  }
  uVar4 = (param_1->SelectionArray).NumBits + 0x1fU & 0xffffffe0;
  iVar1 = (this->SelectionArray).MaxBits;
  (this->SelectionArray).NumBits = 0;
  if ((iVar1 < (int)uVar4) || (0x80 < iVar1)) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    (this->SelectionArray).MaxBits = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  iVar1 = (param_1->SelectionArray).NumBits;
  (this->SelectionArray).NumBits = iVar1;
  if (iVar1 != 0) {
    FVar2 = (param_1->SelectionArray).AllocatorInstance.SecondaryData;
    _Src = (ForElementType<unsigned_int>)&param_1->SelectionArray;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      _Src = FVar2;
    }
    FVar2 = (this->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this_00 = FVar2;
    }
    memcpy((void *)this_00,(void *)_Src,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// Initialize @ 144450530

void __thiscall FDataflowSelection::Initialize(FDataflowSelection *this,int param_1,bool param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  uint uVar6;
  
  (this->SelectionArray).NumBits = param_1;
  uVar6 = param_1 + 0x1fU >> 5;
  this_00 = &this->SelectionArray;
  if (param_1 + 0x1fU >> 5 != 0) {
    if ((this->SelectionArray).MaxBits + 0x1fU >> 5 < uVar6) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar6,4);
      (this->SelectionArray).MaxBits = uVar6 << 5;
    }
    FVar5 = (this->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)this_00;
    }
    if (uVar6 < 9) {
      for (uVar3 = (ulonglong)uVar6; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)FVar5 = -(uint)param_2;
        FVar5 = (ForElementType<unsigned_int>)((longlong)FVar5 + 4);
      }
    }
    else {
      memset((void *)FVar5,-(uint)param_2 & 0xff,(ulonglong)uVar6 << 2);
    }
    iVar2 = (this->SelectionArray).NumBits;
    uVar4 = iVar2 >> 0x1f & 0x1f;
    uVar6 = iVar2 + uVar4;
    iVar2 = (uVar6 & 0x1f) - uVar4;
    if (iVar2 != 0) {
      FVar5 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar5 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar2 & 0x1f);
    }
  }
  return;
}

// InitializeFromCollection @ 144450610

void __thiscall
FDataflowSelection::InitializeFromCollection
          (FDataflowSelection *this,FManagedArrayCollection *param_1,bool param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  uint uVar6;
  
  this_00 = &this->SelectionArray;
  iVar2 = FManagedArrayCollection::NumElements(param_1,this->GroupName);
  (this->SelectionArray).NumBits = iVar2;
  uVar6 = iVar2 + 0x1fU >> 5;
  if (iVar2 + 0x1fU >> 5 != 0) {
    if ((this->SelectionArray).MaxBits + 0x1fU >> 5 < uVar6) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar6,4);
      (this->SelectionArray).MaxBits = uVar6 << 5;
    }
    FVar5 = (this->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)this_00;
    }
    if (uVar6 < 9) {
      for (uVar3 = (ulonglong)uVar6; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)FVar5 = -(uint)param_2;
        FVar5 = (ForElementType<unsigned_int>)((longlong)FVar5 + 4);
      }
    }
    else {
      memset((void *)FVar5,-(uint)param_2 & 0xff,(ulonglong)uVar6 << 2);
    }
    iVar2 = (this->SelectionArray).NumBits;
    uVar4 = iVar2 >> 0x1f & 0x1f;
    uVar6 = iVar2 + uVar4;
    iVar2 = (uVar6 & 0x1f) - uVar4;
    if (iVar2 != 0) {
      FVar5 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar5 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar2 & 0x1f);
    }
  }
  return;
}

// IsValidForCollection @ 144451940

bool __thiscall
FDataflowSelection::IsValidForCollection(FDataflowSelection *this,FManagedArrayCollection *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->SelectionArray).NumBits;
  iVar2 = FManagedArrayCollection::NumElements(param_1,this->GroupName);
  return iVar1 == iVar2;
}

// NumSelected @ 1444529c0

int __thiscall FDataflowSelection::NumSelected(FDataflowSelection *this)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  
  FVar7 = (this->SelectionArray).AllocatorInstance.SecondaryData;
  uVar5 = (this->SelectionArray).NumBits;
  iVar8 = 0;
  uVar6 = 0;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&this->SelectionArray;
  }
  iVar2 = uVar5 + 0x1f;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  uVar5 = uVar5 & 0x8000001f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
  }
  uVar4 = 0xffffffff >> ((byte)(0x20 - uVar5) & 0x1f);
  if (0x1f < (int)(0x20 - uVar5)) {
    uVar4 = 0xffffffff;
  }
  uVar5 = 0xffffffff;
  if (iVar2 == 1) {
    uVar5 = uVar4;
  }
  if (0 < iVar2) {
    do {
      puVar1 = (uint *)((longlong)FVar7 + (ulonglong)uVar6 * 4);
      if (uVar5 == 0xffffffff) {
        uVar5 = *puVar1;
      }
      else {
        uVar5 = *puVar1 & uVar5;
      }
      uVar6 = uVar6 + 1;
      uVar3 = (ulonglong)uVar5 - ((ulonglong)(uVar5 >> 1) & 0x5555555555555555);
      uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
      iVar8 = iVar8 + (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                  0x38);
      uVar5 = 0xffffffff;
      if (uVar6 == iVar2 - 1U) {
        uVar5 = uVar4;
      }
    } while ((int)uVar6 < iVar2);
  }
  return iVar8;
}

// OR @ 144452ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDataflowSelection::OR
          (FDataflowSelection *this,FDataflowSelection *param_1,FDataflowSelection *param_2)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((&this->SelectionArray == &param_1->SelectionArray) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("&A != &B",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x52d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (&this->SelectionArray,&param_1->SelectionArray,&local_40,MaxSize,local_48);
  if (&param_2->SelectionArray != &local_40) {
    if (local_40.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(param_2->SelectionArray).AllocatorInstance.InlineData =
           local_40.AllocatorInstance.InlineData._0_8_;
      *(undefined8 *)((param_2->SelectionArray).AllocatorInstance.InlineData + 8) =
           local_40.AllocatorInstance.InlineData._8_8_;
    }
    FVar1 = (param_2->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (param_2->SelectionArray).AllocatorInstance.SecondaryData =
         local_40.AllocatorInstance.SecondaryData;
    (param_2->SelectionArray).NumBits = local_40.NumBits;
    (param_2->SelectionArray).MaxBits = local_40.MaxBits;
    local_40.NumBits = 0;
    local_40.MaxBits = 0;
    local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// SetFromArray @ 144463ff0

void __thiscall
FDataflowSelection::SetFromArray
          (FDataflowSelection *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ForElementType<unsigned_int> FVar10;
  
  iVar4 = (this->SelectionArray).NumBits;
  this_00 = &this->SelectionArray;
  (this->SelectionArray).NumBits = iVar4;
  uVar7 = iVar4 + 0x1f;
  uVar8 = uVar7 >> 5;
  if (uVar7 >> 5 != 0) {
    if ((this->SelectionArray).MaxBits + 0x1fU >> 5 < uVar8) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar8,4);
      (this->SelectionArray).MaxBits = uVar8 << 5;
    }
    FVar6 = (this->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar6,0,(ulonglong)uVar8 << 2);
    iVar4 = (this->SelectionArray).NumBits;
    uVar8 = iVar4 >> 0x1f & 0x1f;
    uVar7 = iVar4 + uVar8;
    iVar4 = (uVar7 & 0x1f) - uVar8;
    if (iVar4 != 0) {
      FVar6 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<unsigned_int>)0x0) {
        FVar6 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)uVar7 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
    }
  }
  iVar4 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar4) {
    lVar9 = 0;
    uVar8 = 1;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar4) {
        uVar5 = ~uVar7 >> 0x1f;
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
      if ((param_1->AllocatorInstance).Data[lVar9] != (FScriptContainerElement)0x0) {
        if ((((int)uVar7 < 0) || ((this->SelectionArray).NumBits <= (int)uVar7)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar6 = (this->SelectionArray).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&this->SelectionArray;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar6;
        }
        uVar5 = uVar7;
        if ((int)uVar7 < 0) {
          uVar5 = uVar7 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)uVar5 >> 5) * 4);
        *puVar1 = *puVar1 | uVar8;
      }
      iVar4 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar9 = lVar9 + 1;
    } while ((int)uVar7 < iVar4);
  }
  return;
}

// SetFromArray @ 1444641a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDataflowSelection::SetFromArray
          (FDataflowSelection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  iVar9 = (this->SelectionArray).NumBits;
  this_00 = &this->SelectionArray;
  (this->SelectionArray).NumBits = iVar9;
  uVar8 = iVar9 + 0x1f;
  uVar13 = uVar8 >> 5;
  if (uVar8 >> 5 != 0) {
    if ((this->SelectionArray).MaxBits + 0x1fU >> 5 < uVar13) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar13,4);
      (this->SelectionArray).MaxBits = uVar13 << 5;
    }
    FVar11 = (this->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar11,0,(ulonglong)uVar13 << 2);
    iVar9 = (this->SelectionArray).NumBits;
    uVar13 = iVar9 >> 0x1f & 0x1f;
    uVar8 = iVar9 + uVar13;
    iVar9 = (uVar8 & 0x1f) - uVar13;
    if (iVar9 != 0) {
      FVar11 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<unsigned_int>)0x0) {
        FVar11 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar11 + (longlong)((int)uVar8 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
    }
  }
  pFVar14 = (param_1->AllocatorInstance).Data;
  bVar5 = true;
  iVar9 = param_1->ArrayNum;
  pFVar2 = pFVar14 + (longlong)iVar9 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar2) break;
    iVar3 = *(int *)pFVar14;
    if ((iVar3 < 0) || ((this->SelectionArray).NumBits <= iVar3)) {
      bVar5 = false;
      pFVar14 = pFVar14 + 4;
    }
    else {
      if (((this->SelectionArray).NumBits <= iVar3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      FVar11 = (this->SelectionArray).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<unsigned_int>)this_00;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = FVar11;
      }
      iVar10 = iVar3;
      if (iVar3 < 0) {
        iVar10 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)FVar12 + (longlong)(iVar10 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      pFVar14 = pFVar14 + 4;
    }
  }
  if ((!bVar5) && (2 < (byte)LogChaosDataflow._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
  }
  return bVar5;
}

// SetSelected @ 144464c20

void __thiscall
FDataflowSelection::SetSelected
          (FDataflowSelection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar10 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar10) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)((param_1->AllocatorInstance).Data + lVar11);
      if ((-1 < iVar10) && (iVar10 < (this->SelectionArray).NumBits)) {
        uVar6 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)((param_1->AllocatorInstance).Data + lVar11);
        if (((iVar10 < 0) || ((this->SelectionArray).NumBits <= iVar10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2 = (this->SelectionArray).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<unsigned_int>)&this->SelectionArray;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = FVar2;
        }
        iVar7 = iVar10;
        if (iVar10 < 0) {
          iVar7 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar8 + (longlong)(iVar7 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
      }
      iVar10 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar9 < iVar10);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

// SetWithMask @ 144465170

void __thiscall
FDataflowSelection::SetWithMask(FDataflowSelection *this,bool param_1,FDataflowSelection *param_2)

{
  longlong lVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  int iVar7;
  uint uVar8;
  
  iVar5 = (this->SelectionArray).NumBits;
  if ((iVar5 == (param_2->SelectionArray).NumBits) && (iVar7 = 0, 0 < iVar5)) {
    do {
      if (((iVar7 < 0) || ((param_2->SelectionArray).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (param_2->SelectionArray).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<unsigned_int>)&param_2->SelectionArray;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar6 = FVar2;
      }
      uVar8 = 1 << ((byte)iVar7 & 0x1f);
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      lVar1 = (longlong)(iVar5 >> 5) * 4;
      if ((*(uint *)(lVar1 + (longlong)FVar6) & uVar8) != 0) {
        if (((iVar7 < 0) || ((this->SelectionArray).NumBits <= iVar7)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar2 = (this->SelectionArray).AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<unsigned_int>)&this->SelectionArray;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar6 = FVar2;
        }
        if (param_1) {
          uVar8 = uVar8 | *(uint *)(lVar1 + (longlong)FVar6);
        }
        else {
          uVar8 = ~uVar8 & *(uint *)(lVar1 + (longlong)FVar6);
        }
        *(uint *)(lVar1 + (longlong)FVar6) = uVar8;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (this->SelectionArray).NumBits);
  }
  return;
}

// Subtract @ 1444657a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDataflowSelection::Subtract
          (FDataflowSelection *this,FDataflowSelection *param_1,FDataflowSelection *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> FVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_b8 [32];
  <lambda_1> local_88 [8];
  TBitArray<FDefaultBitArrayAllocator> local_80;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar5 = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0;
  uVar3 = (param_1->SelectionArray).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar3) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar6 = uVar3;
    }
    local_60._24_8_ = (ulonglong)uVar6 << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  iVar2 = (param_1->SelectionArray).NumBits;
  local_60.NumBits = iVar2;
  uVar3 = 0;
  if (iVar2 != 0) {
    FVar4 = (param_1->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)&param_1->SelectionArray;
    }
    _Dst = (ForElementType<unsigned_int>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      _Dst = local_60.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,(void *)FVar4,(ulonglong)(iVar2 + 0x1fU >> 5) << 2);
    uVar3 = local_60.NumBits;
  }
  FVar4 = (ForElementType<unsigned_int>)&local_60;
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar4 = local_60.AllocatorInstance.SecondaryData;
  }
  iVar2 = (int)(uVar3 + 0x1f + ((int)(uVar3 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
  uVar3 = uVar3 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  uVar6 = 0xffffffff >> ((byte)(0x20 - uVar3) & 0x1f);
  if (0x1f < (int)(0x20 - uVar3)) {
    uVar6 = 0xffffffff;
  }
  uVar3 = 0xffffffff;
  if (iVar2 == 1) {
    uVar3 = uVar6;
  }
  if (0 < iVar2) {
    do {
      puVar1 = (uint *)((longlong)FVar4 + uVar5 * 4);
      uVar7 = *(uint *)((longlong)FVar4 + uVar5 * 4) & uVar3;
      if (uVar3 == 0xffffffff) {
        uVar7 = *puVar1;
      }
      uVar3 = ~uVar7 & uVar6;
      if ((uint)uVar5 != iVar2 - 1U) {
        uVar3 = ~uVar7;
      }
      uVar7 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      *puVar1 = uVar3;
      uVar3 = 0xffffffff;
      if (uVar7 == iVar2 - 1U) {
        uVar3 = uVar6;
      }
    } while ((int)uVar7 < iVar2);
  }
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_80.NumBits = 0;
  local_80.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (&this->SelectionArray,&local_60,&local_80,MaxSize,local_88);
  if (&param_2->SelectionArray != &local_80) {
    if (local_80.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(param_2->SelectionArray).AllocatorInstance.InlineData =
           local_80.AllocatorInstance.InlineData._0_8_;
      *(undefined8 *)((param_2->SelectionArray).AllocatorInstance.InlineData + 8) =
           local_80.AllocatorInstance.InlineData._8_8_;
    }
    FVar4 = (param_2->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (param_2->SelectionArray).AllocatorInstance.SecondaryData =
         local_80.AllocatorInstance.SecondaryData;
    (param_2->SelectionArray).NumBits = local_80.NumBits;
    (param_2->SelectionArray).MaxBits = local_80.MaxBits;
    local_80.NumBits = 0;
    local_80.MaxBits = 0;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// ToString @ 144466ea0

FString * __thiscall
FDataflowSelection::ToString(FDataflowSelection *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar2 = (this->SelectionArray).NumBits;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendInt(&local_38,iVar2);
  iVar2 = NumSelected(this);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,iVar2);
  ::FName::ToString(&this->GroupName,&local_28);
  ::FString::PrintfImpl(&local_58,L"Selected %s: %s of %s");
  if (__return_storage_ptr__ != &local_58) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// XOR @ 14446a690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDataflowSelection::XOR
          (FDataflowSelection *this,FDataflowSelection *param_1,FDataflowSelection *param_2)

{
  ForElementType<unsigned_int> FVar1;
  undefined1 auStackY_68 [32];
  <lambda_1> local_38 [8];
  TBitArray<FDefaultBitArrayAllocator> local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  local_30.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_30.NumBits = 0;
  local_30.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseXOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (&this->SelectionArray,&param_1->SelectionArray,&local_30,MaxSize,local_38);
  if (&param_2->SelectionArray != &local_30) {
    if (local_30.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(param_2->SelectionArray).AllocatorInstance.InlineData =
           local_30.AllocatorInstance.InlineData._0_8_;
      *(undefined8 *)((param_2->SelectionArray).AllocatorInstance.InlineData + 8) =
           local_30.AllocatorInstance.InlineData._8_8_;
    }
    FVar1 = (param_2->SelectionArray).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (param_2->SelectionArray).AllocatorInstance.SecondaryData =
         local_30.AllocatorInstance.SecondaryData;
    (param_2->SelectionArray).NumBits = local_30.NumBits;
    (param_2->SelectionArray).MaxBits = local_30.MaxBits;
    local_30.NumBits = 0;
    local_30.MaxBits = 0;
    local_30.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  }
  if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_30.AllocatorInstance.SecondaryData);
  }
  return;
}

