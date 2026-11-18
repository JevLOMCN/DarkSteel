// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 16

// StaticStruct @ 1494bcde0

UScriptStruct * __cdecl FShaderValueType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShaderValueType.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FShaderValueType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderValueType,(UObject *)pUVar1,
                         L"ShaderValueType");
  }
  return Z_Registration_Info_UScriptStruct_FShaderValueType.OuterSingleton;
}

// FShaderValueType @ 1494c45a0

FShaderValueType * __thiscall
FShaderValueType::FShaderValueType(FShaderValueType *this,FShaderValueType *param_1)

{
  TArray<FShaderValueType::FStructElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->StructElements;
  this->Type = param_1->Type;
  this->DimensionType = param_1->DimensionType;
  this->field2_0x2 = param_1->field2_0x2;
  this->field2_0x2 = param_1->field2_0x2;
  this->MatrixColumnCount = param_1->MatrixColumnCount;
  this->Name = param_1->Name;
  this->bIsDynamicArray = param_1->bIsDynamicArray;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->StructElements).ArrayMax;
  iVar3 = (param_1->StructElements).ArrayNum;
  _Src = (param_1->StructElements).AllocatorInstance.Data;
  (this->StructElements).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// operator== @ 1494c6420

bool __thiscall FShaderValueType::operator==(FShaderValueType *this,FShaderValueType *param_1)

{
  EShaderFundamentalDimensionType EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  if ((this->Type == param_1->Type) && (this->bIsDynamicArray == param_1->bIsDynamicArray)) {
    if (this->Type == Struct) {
      if ((this->Name == param_1->Name) &&
         (iVar2 = (this->StructElements).ArrayNum, iVar2 == (param_1->StructElements).ArrayNum)) {
        uVar9 = 0;
        if (iVar2 < 1) {
          return true;
        }
        lVar10 = 0;
        while( true ) {
          uVar8 = 0;
          if ((int)uVar9 < (this->StructElements).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar3 = (this->StructElements).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar9 < (param_1->StructElements).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) break;
          pFVar4 = (param_1->StructElements).AllocatorInstance.Data;
          if (*(longlong *)(pFVar3 + lVar10) != *(longlong *)(pFVar4 + lVar10)) {
            return false;
          }
          if (*(longlong *)(pFVar3 + lVar10 + 8) != *(longlong *)(pFVar4 + lVar10 + 8)) {
            return false;
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x10;
          if ((this->StructElements).ArrayNum <= (int)uVar9) {
            return true;
          }
        }
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    else {
      EVar1 = this->DimensionType;
      if (EVar1 == param_1->DimensionType) {
        if (EVar1 == Vector) {
          if ((this->field2_0x2).VectorElemCount == (param_1->field2_0x2).VectorElemCount) {
            return true;
          }
        }
        else {
          if (EVar1 != Matrix) {
            return true;
          }
          if ((this->field2_0x2).VectorElemCount == (param_1->field2_0x2).VectorElemCount) {
            return this->MatrixColumnCount == param_1->MatrixColumnCount;
          }
        }
      }
    }
  }
  return false;
}

// FromString @ 1494cdd90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FShaderValueTypeHandle __cdecl FShaderValueType::FromString(FString *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FShaderValueTypeHandle FVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FShaderValueType *pFVar9;
  EShaderFundamentalType EVar11;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FRegexMatcher local_48;
  FShaderValueType *pFVar10;
  
  pFVar10 = (FShaderValueType *)0x0;
  pFVar9 = (FShaderValueType *)0x0;
  local_res10[0] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&local_68,L"\\s*(bool|int|uint|float)((?:[1-4])|(?:[1-4]x[1-4]))?\\s*");
    FRegexPattern::FRegexPattern(&ValueTypeDeclPattern,&local_68,None);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    atexit(`FShaderValueType::FromString'::__l2::
           _dynamic_atexit_destructor_for__ValueTypeDeclPattern__);
    _Init_thread_footer(&::_TSS0);
  }
  FRegexMatcher::FRegexMatcher(&local_48,&ValueTypeDeclPattern,param_1);
  bVar2 = FRegexMatcher::FindNext(&local_48);
  FVar6.ValueTypePtr = pFVar10;
  if (!bVar2) goto LAB_1494cdff7;
  bVar2 = false;
  FRegexMatcher::GetCaptureGroup(&local_48,&local_88,1);
  FRegexMatcher::GetCaptureGroup(&local_48,&local_78,2);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar8.Data = local_88.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"bool");
  if (iVar4 == 0) {
    EVar11 = Bool;
LAB_1494cdeb6:
    iVar4 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if (iVar4 == 0) {
      FVar6 = Get(EVar11);
    }
    else if (iVar4 == 1) {
      local_res10[0] = 0;
      bVar2 = FDefaultValueHelper::ParseInt(&local_78,local_res10);
      FVar6.ValueTypePtr = pFVar10;
      if (bVar2) {
        FVar6 = Get(EVar11,local_res10[0]);
      }
    }
    else {
      FVar6.ValueTypePtr = pFVar10;
      if ((local_78.Data.ArrayNum != 0) &&
         (FVar6.ValueTypePtr = pFVar9, local_78.Data.ArrayNum + -1 == 3)) {
        local_res20[0] = 0;
        local_res18[0] = 0;
        ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)local_78.Data.AllocatorInstance.Data,1)
        ;
        bVar3 = FDefaultValueHelper::ParseInt(&local_58,local_res20);
        if (bVar3) {
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar8.Data = local_78.Data.AllocatorInstance.Data;
          }
          iVar4 = local_78.Data.ArrayNum + -1;
          if (local_78.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          iVar7 = iVar4;
          if (1 < iVar4) {
            iVar7 = 1;
          }
          iVar5 = 0;
          if (0 < iVar7) {
            iVar5 = iVar7;
          }
          ::FString::FString(&local_68,
                             (wchar_t *)(FVar8.Data + ((longlong)iVar4 - (longlong)iVar5) * 2));
          bVar2 = true;
          bVar3 = FDefaultValueHelper::ParseInt(&local_68,local_res18);
          if (!bVar3) goto LAB_1494cdf8e;
          bVar1 = true;
LAB_1494cdf97:
          bVar3 = bVar1;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        else {
LAB_1494cdf8e:
          bVar3 = false;
          bVar1 = false;
          if (bVar2) goto LAB_1494cdf97;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          FVar6 = Get(EVar11,local_res20[0],local_res18[0]);
        }
      }
    }
  }
  else {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar8.Data = local_88.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"int");
    if (iVar4 == 0) {
      EVar11 = Int;
      goto LAB_1494cdeb6;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar8.Data = local_88.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"uint");
    if (iVar4 == 0) {
      EVar11 = Uint;
      goto LAB_1494cdeb6;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar8.Data = local_88.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"float");
    FVar6.ValueTypePtr = pFVar9;
    if (iVar4 == 0) {
      EVar11 = Float;
      goto LAB_1494cdeb6;
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_1494cdff7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  return (FShaderValueTypeHandle)FVar6.ValueTypePtr;
}

// Get @ 1494ced50

FShaderValueTypeHandle __cdecl
FShaderValueType::Get
          (FName param_1,
          TArray<FShaderValueType::FStructElement,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FShaderValueType *pFVar7;
  FShaderValueTypeHandle FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FShaderValueType local_38;
  
  FVar8.ValueTypePtr = (FShaderValueType *)0x0;
  if (param_1 != (FName)0x0) {
    iVar1 = param_2->ArrayNum;
    local_38.bIsDynamicArray = false;
    pFVar10 = (param_2->AllocatorInstance).Data;
    local_38.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
    local_38.StructElements.ArrayNum = 0;
    local_38.StructElements.ArrayMax = 0;
    local_38.Type = Struct;
    local_38.DimensionType = Scalar;
    pFVar7 = FVar8.ValueTypePtr;
    local_38.Name = param_1;
    while( true ) {
      iVar6 = (int)pFVar7;
      if (param_2->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FShaderValueType::FStructElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        iVar6 = local_38.StructElements.ArrayNum;
      }
      if (pFVar10 == pFVar9) break;
      if ((local_38.StructElements.AllocatorInstance.Data <= pFVar10) &&
         (pFVar10 < local_38.StructElements.AllocatorInstance.Data +
                    (longlong)local_38.StructElements.ArrayMax * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          FVar8.ValueTypePtr = (FShaderValueType *)(*pcVar2)();
          return (FShaderValueTypeHandle)FVar8.ValueTypePtr;
        }
        iVar6 = local_38.StructElements.ArrayNum;
      }
      if (iVar6 == local_38.StructElements.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_38.StructElements.AllocatorInstance,
                           &local_38.StructElements.ArrayMax);
      }
      local_38.StructElements.ArrayNum = iVar6 + 1U;
      uVar3 = *(undefined8 *)pFVar10;
      uVar4 = *(undefined8 *)(pFVar10 + 8);
      pFVar10 = pFVar10 + 0x10;
      *(undefined8 *)(local_38.StructElements.AllocatorInstance.Data + (longlong)iVar6 * 0x10) =
           uVar3;
      *(undefined8 *)(local_38.StructElements.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           uVar4;
      pFVar7 = (FShaderValueType *)(ulonglong)(iVar6 + 1U);
    }
    if (iVar6 != 0) {
      FVar8 = GetOrCreate(&local_38);
    }
    if (local_38.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.StructElements.AllocatorInstance.Data);
    }
  }
  return (FShaderValueTypeHandle)FVar8.ValueTypePtr;
}

// Get @ 1494ceec0

FShaderValueTypeHandle __cdecl
FShaderValueType::Get(FName param_1,initializer_list<FShaderValueType::FStructElement> *param_2)

{
  FStructElement *pFVar1;
  FShaderValueType *pFVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  uint uVar6;
  FShaderValueTypeHandle FVar7;
  FShaderValueType *pFVar8;
  FStructElement *pFVar9;
  FShaderValueType local_28;
  
  FVar7.ValueTypePtr = (FShaderValueType *)0x0;
  if (param_1 != (FName)0x0) {
    local_28.bIsDynamicArray = false;
    pFVar1 = param_2->_Last;
    pFVar9 = param_2->_First;
    local_28.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.StructElements.ArrayNum = 0;
    local_28.StructElements.ArrayMax = 0;
    local_28.Type = Struct;
    local_28.DimensionType = Scalar;
    pFVar8 = FVar7.ValueTypePtr;
    local_28.Name = param_1;
    if (pFVar9 != pFVar1) {
      while( true ) {
        pFVar2 = (pFVar9->Type).ValueTypePtr;
        if ((pFVar2 == (FShaderValueType *)0x0) || (pFVar2->Type == Struct)) goto LAB_1494ceff0;
        uVar6 = (uint)pFVar8;
        if ((local_28.StructElements.AllocatorInstance.Data <= pFVar9) &&
           ((pFVar9 < (FStructElement *)
                      (local_28.StructElements.AllocatorInstance.Data +
                      (longlong)local_28.StructElements.ArrayMax * 0x10) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar6 = local_28.StructElements.ArrayNum, bVar5)))) {
          pcVar3 = (code *)swi(3);
          FVar7.ValueTypePtr = (FShaderValueType *)(*pcVar3)();
          return (FShaderValueTypeHandle)FVar7.ValueTypePtr;
        }
        if (uVar6 == local_28.StructElements.ArrayMax) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_28.StructElements.AllocatorInstance,
                             &local_28.StructElements.ArrayMax);
        }
        local_28.StructElements.ArrayNum = uVar6 + 1;
        pFVar4 = &pFVar9->Name;
        pFVar8 = (pFVar9->Type).ValueTypePtr;
        pFVar9 = pFVar9 + 1;
        *(FName *)&local_28.StructElements.AllocatorInstance.Data[(longlong)(int)uVar6 * 0x10].
                   field_0x0 = *pFVar4;
        *(FShaderValueType **)
         (local_28.StructElements.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10 + 8) = pFVar8
        ;
        if (pFVar9 == pFVar1) break;
        pFVar8 = (FShaderValueType *)(ulonglong)(uint)local_28.StructElements.ArrayNum;
      }
      if (local_28.StructElements.ArrayNum != 0) {
        FVar7 = GetOrCreate(&local_28);
      }
    }
LAB_1494ceff0:
    if ((FStructElement *)local_28.StructElements.AllocatorInstance.Data != (FStructElement *)0x0) {
      FMemory::Free(local_28.StructElements.AllocatorInstance.Data);
    }
  }
  return (FShaderValueTypeHandle)FVar7.ValueTypePtr;
}

// Get @ 1494cf020

FShaderValueTypeHandle __cdecl FShaderValueType::Get(EShaderFundamentalType param_1)

{
  FShaderValueTypeHandle FVar1;
  FShaderValueType local_28;
  
  FVar1.ValueTypePtr = (FShaderValueType *)0x0;
  if (param_1 != Struct) {
    local_28.Name.ComparisonIndex.Value = 0;
    local_28.Name.Number = 0;
    local_28.bIsDynamicArray = false;
    local_28.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.StructElements.ArrayNum = 0;
    local_28.StructElements.ArrayMax = 0;
    local_28.DimensionType = Scalar;
    local_28.Type = param_1;
    FVar1 = GetOrCreate(&local_28);
    if (local_28.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StructElements.AllocatorInstance.Data);
    }
  }
  return (FShaderValueTypeHandle)FVar1.ValueTypePtr;
}

// Get @ 1494cf080

FShaderValueTypeHandle __cdecl FShaderValueType::Get(EShaderFundamentalType param_1,int param_2)

{
  FShaderValueTypeHandle FVar1;
  FShaderValueType local_28;
  
  if ((param_1 != Struct) && (param_2 - 1U < 4)) {
    local_28.Name.ComparisonIndex.Value = 0;
    local_28.Name.Number = 0;
    local_28.bIsDynamicArray = false;
    local_28.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.StructElements.ArrayNum = 0;
    local_28.StructElements.ArrayMax = 0;
    local_28.DimensionType = Vector;
    local_28.field2_0x2.VectorElemCount = (uchar)param_2;
    local_28.Type = param_1;
    FVar1 = GetOrCreate(&local_28);
    if (local_28.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StructElements.AllocatorInstance.Data);
    }
    return (FShaderValueTypeHandle)FVar1.ValueTypePtr;
  }
  return (FShaderValueTypeHandle)(FShaderValueType *)0x0;
}

// Get @ 1494cf0f0

FShaderValueTypeHandle __cdecl
FShaderValueType::Get(EShaderFundamentalType param_1,int param_2,int param_3)

{
  FShaderValueTypeHandle FVar1;
  FShaderValueType local_28;
  
  if (((param_1 != Struct) && (param_2 - 1U < 4)) && (param_3 - 1U < 4)) {
    local_28.Name.ComparisonIndex.Value = 0;
    local_28.Name.Number = 0;
    local_28.bIsDynamicArray = false;
    local_28.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.StructElements.ArrayNum = 0;
    local_28.StructElements.ArrayMax = 0;
    local_28.DimensionType = Matrix;
    local_28.field2_0x2.VectorElemCount = (uchar)param_2;
    local_28.MatrixColumnCount = (uchar)param_3;
    local_28.Type = param_1;
    FVar1 = GetOrCreate(&local_28);
    if (local_28.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StructElements.AllocatorInstance.Data);
    }
    return (FShaderValueTypeHandle)FVar1.ValueTypePtr;
  }
  return (FShaderValueTypeHandle)(FShaderValueType *)0x0;
}

// GetMemberStructTypes @ 1494cfce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FShaderValueTypeHandle,TSizedDefaultAllocator<32>_> * __thiscall
FShaderValueType::GetMemberStructTypes
          (FShaderValueType *this,
          TArray<FShaderValueTypeHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined1 auStackY_a8 [32];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,4,&__return_storage_ptr__->AllocatorInstance,0,&__return_storage_ptr__->ArrayMax);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  `FShaderValueType::GetMemberStructTypes'::__l2::FStructCollector::WalkMembers
            (&local_78,this,__return_storage_ptr__);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return __return_storage_ptr__;
}

// GetOrCreate @ 1494cfed0

FShaderValueTypeHandle __cdecl FShaderValueType::GetOrCreate(FShaderValueType *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  FShaderValueType *pFVar4;
  FShaderValueType *pFVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  FShaderValueTypeHandle local_res8;
  FShaderValueType *local_res10;
  
  AcquireSRWLockShared((PSRWLOCK)&GloballyKnownValueTypesLock);
  uVar3 = ::GetTypeHash(param_1);
  if (GloballyKnownValueTypes.Elements._8_4_ != GloballyKnownValueTypes.Elements._52_4_) {
    FVar7 = (ForElementType<FSetElementId>)0x154c89a28;
    if (GloballyKnownValueTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar7 = GloballyKnownValueTypes.Hash.SecondaryData;
    }
    iVar1 = *(int *)((longlong)FVar7 +
                    (ulonglong)(GloballyKnownValueTypes.HashSize - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x10;
      bVar2 = operator==(*(FShaderValueType **)(lVar6 + GloballyKnownValueTypes.Elements._0_8_),
                         param_1);
      if (bVar2) {
        if ((undefined8 *)(lVar6 + GloballyKnownValueTypes.Elements._0_8_) != (undefined8 *)0x0) {
          pFVar5 = *(FShaderValueType **)(lVar6 + GloballyKnownValueTypes.Elements._0_8_);
          ReleaseSRWLockShared((PSRWLOCK)&GloballyKnownValueTypesLock);
          return (FShaderValueTypeHandle)pFVar5;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 8 + GloballyKnownValueTypes.Elements._0_8_);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&GloballyKnownValueTypesLock);
  AcquireSRWLockExclusive((PSRWLOCK)&GloballyKnownValueTypesLock);
  uVar3 = ::GetTypeHash(param_1);
  if (GloballyKnownValueTypes.Elements._8_4_ != GloballyKnownValueTypes.Elements._52_4_) {
    FVar7 = (ForElementType<FSetElementId>)0x154c89a28;
    if (GloballyKnownValueTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar7 = GloballyKnownValueTypes.Hash.SecondaryData;
    }
    iVar1 = *(int *)((longlong)FVar7 +
                    (ulonglong)(GloballyKnownValueTypes.HashSize - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x10;
      bVar2 = operator==(*(FShaderValueType **)(lVar6 + GloballyKnownValueTypes.Elements._0_8_),
                         param_1);
      if (bVar2) {
        if ((undefined8 *)(lVar6 + GloballyKnownValueTypes.Elements._0_8_) != (undefined8 *)0x0) {
          pFVar5 = *(FShaderValueType **)(lVar6 + GloballyKnownValueTypes.Elements._0_8_);
          goto LAB_1494d00c8;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 8 + GloballyKnownValueTypes.Elements._0_8_);
    }
  }
  pFVar4 = ::operator_new(0x20);
  pFVar5 = (FShaderValueType *)0x0;
  if (pFVar4 != (FShaderValueType *)0x0) {
    pFVar4->Type = param_1->Type;
    pFVar4->DimensionType = param_1->DimensionType;
    pFVar4->field2_0x2 = param_1->field2_0x2;
    pFVar4->field2_0x2 = param_1->field2_0x2;
    pFVar4->MatrixColumnCount = param_1->MatrixColumnCount;
    pFVar4->Name = param_1->Name;
    bVar2 = param_1->bIsDynamicArray;
    (pFVar4->StructElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->bIsDynamicArray = bVar2;
    (pFVar4->StructElements).AllocatorInstance.Data =
         (param_1->StructElements).AllocatorInstance.Data;
    (param_1->StructElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->StructElements).ArrayNum = (param_1->StructElements).ArrayNum;
    (pFVar4->StructElements).ArrayMax = (param_1->StructElements).ArrayMax;
    (param_1->StructElements).ArrayNum = 0;
    (param_1->StructElements).ArrayMax = 0;
    pFVar5 = pFVar4;
  }
  local_res10 = pFVar5;
  TSet<FShaderValueTypeHandle,HandleKeyFuncs,FDefaultSetAllocator>::
  Emplace<FShaderValueTypeHandle_const_&>(&GloballyKnownValueTypes,&local_res8,(bool *)&local_res10)
  ;
LAB_1494d00c8:
  ReleaseSRWLockExclusive((PSRWLOCK)&GloballyKnownValueTypesLock);
  return (FShaderValueTypeHandle)pFVar5;
}

// GetResourceElementSize @ 1494d0ec0

int __thiscall FShaderValueType::GetResourceElementSize(FShaderValueType *this)

{
  EShaderFundamentalType EVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  EVar1 = this->Type;
  iVar4 = 0;
  if ((((EVar1 == Bool) || (EVar1 == Int)) || (EVar1 == Uint)) || (EVar1 == Float)) {
    iVar4 = 4;
  }
  else if (EVar1 == Struct) {
    iVar2 = (this->StructElements).ArrayNum;
    pFVar6 = (this->StructElements).AllocatorInstance.Data;
    pFVar5 = pFVar6 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->StructElements).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FShaderValueType::FStructElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar5) break;
      iVar3 = GetResourceElementSize(*(FShaderValueType **)(pFVar6 + 8));
      iVar4 = iVar4 + iVar3;
      pFVar6 = pFVar6 + 0x10;
    }
  }
  if (this->DimensionType != Vector) {
    if (this->DimensionType == Matrix) {
      return (uint)this->MatrixColumnCount * (uint)(this->field2_0x2).VectorElemCount * iVar4;
    }
    return iVar4;
  }
  return (uint)(this->field2_0x2).VectorElemCount * iVar4;
}

// GetTypeDeclaration @ 1494d2070

/* WARNING: Removing unreachable block (ram,0x0001494d2e7c) */
/* WARNING: Removing unreachable block (ram,0x0001494d2a30) */
/* WARNING: Removing unreachable block (ram,0x0001494d2d0d) */

FString * __thiscall
FShaderValueType::GetTypeDeclaration
          (FShaderValueType *this,FString *__return_storage_ptr__,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_1,bool param_2)

{
  undefined8 *puVar1;
  FShaderValueType *this_00;
  code *pcVar2;
  longlong lVar3;
  FShaderParametersMetadata *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FShaderValueTypeHandle FVar8;
  FString *pFVar9;
  FName *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  FName *this_01;
  ulonglong uVar23;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  ForAnyElementType local_198;
  undefined8 local_190;
  ForAnyElementType local_188;
  undefined8 local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  int local_168;
  int local_164;
  undefined4 local_160;
  int local_15c;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [6];
  FString local_150;
  FString local_140;
  FString local_130;
  longlong local_120;
  longlong local_118;
  FString local_110;
  FTypeMetaData local_100;
  FName local_e8;
  longlong local_e0;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FShaderValueType local_70;
  
  if (this->Type != Struct) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FVar8.ValueTypePtr = this;
  if (this->bIsDynamicArray != false) {
    FShaderValueType(&local_70,this);
    local_70.bIsDynamicArray = false;
    FVar8 = GetOrCreate(&local_70);
    if (local_70.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.StructElements.AllocatorInstance.Data);
    }
  }
  ComputeFramework::FTypeMetaData::FTypeMetaData(&local_100,FVar8);
  pFVar4 = local_100.Metadata;
  if (((local_100.Metadata)->Members).ArrayNum == (this->StructElements).ArrayNum) {
    uVar11 = 0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    uVar6 = ((local_100.Metadata)->Members).ArrayNum;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,&local_178,0,(int *)((longlong)&local_170 + 4));
    }
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    uVar6 = (pFVar4->Members).ArrayNum;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,&local_198,0,(int *)((longlong)&local_190 + 4));
    }
    iVar7 = (pFVar4->Members).ArrayNum;
    uVar6 = 0;
    uVar19 = uVar11;
    uVar22 = uVar11;
    if (0 < iVar7) {
      do {
        uVar17 = (uint)uVar19;
        uVar21 = uVar17 + 1;
        uVar16 = ~uVar17 >> 0x1f;
        if ((int)uVar21 < iVar7) {
          uVar18 = 0;
          if ((int)uVar17 < iVar7) {
            uVar18 = uVar16;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar2)();
            return pFVar9;
          }
          iVar7 = *(int *)((pFVar4->Members).AllocatorInstance.Data + uVar22 + 0x14);
          uVar18 = uVar6;
          if ((int)uVar21 < (pFVar4->Members).ArrayNum) {
            uVar18 = ~uVar21 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar2)();
            return pFVar9;
          }
          local_168 = *(int *)((pFVar4->Members).AllocatorInstance.Data + uVar22 + 0x44) - iVar7;
          if (((local_198.Data <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               local_198.Data + (longlong)local_190._4_4_ * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar2)();
            return pFVar9;
          }
          if ((int)local_190 == local_190._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_198,(int *)((longlong)&local_190 + 4));
            local_190 = CONCAT44(local_190._4_4_,iVar7);
          }
          iVar7 = local_168;
        }
        else {
          uVar18 = uVar6;
          if ((int)uVar17 < iVar7) {
            uVar18 = uVar16;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar2)();
            return pFVar9;
          }
          local_164 = (local_100.Metadata)->Size -
                      *(int *)((pFVar4->Members).AllocatorInstance.Data + uVar22 + 0x14);
          if (((local_198.Data <= (FScriptContainerElement *)&local_164) &&
              ((FScriptContainerElement *)&local_164 <
               local_198.Data + (longlong)local_190._4_4_ * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar2)();
            return pFVar9;
          }
          if ((int)local_190 == local_190._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_198,(int *)((longlong)&local_190 + 4));
            local_190 = CONCAT44(local_190._4_4_,iVar7);
          }
          iVar7 = local_164;
        }
        lVar13 = (longlong)(int)local_190;
        local_190 = CONCAT44(local_190._4_4_,(int)local_190 + 1);
        *(int *)(local_198.Data + lVar13 * 4) = iVar7;
        uVar18 = 0;
        if ((int)uVar17 < (pFVar4->Members).ArrayNum) {
          uVar18 = uVar16;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar2)();
          return pFVar9;
        }
        local_160 = *(undefined4 *)((pFVar4->Members).AllocatorInstance.Data + uVar22 + 0x14);
        if (((local_178.Data <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 < local_178.Data + (longlong)local_170._4_4_ * 4)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar2)();
          return pFVar9;
        }
        iVar7 = (int)local_170;
        if ((int)local_170 == local_170._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_178,(int *)((longlong)&local_170 + 4));
        }
        local_170 = CONCAT44(local_170._4_4_,iVar7 + 1);
        *(undefined4 *)(local_178.Data + (longlong)iVar7 * 4) = local_160;
        iVar7 = (pFVar4->Members).ArrayNum;
        uVar19 = (ulonglong)uVar21;
        uVar22 = uVar22 + 0x30;
      } while ((int)uVar21 < iVar7);
    }
    local_188.Data = (FScriptContainerElement *)0x0;
    local_180 = 0;
    uVar16 = (pFVar4->Members).ArrayNum;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar16,&local_188,0,(int *)((longlong)&local_180 + 4));
    }
    uVar16 = (this->StructElements).ArrayNum;
    uVar17 = 0;
    uVar19 = uVar11;
    uVar22 = uVar11;
    uVar23 = uVar11;
    if (0 < (int)uVar16) {
      do {
        uVar18 = (uint)uVar19;
        uVar21 = ~uVar18 >> 0x1f;
        uVar16 = uVar6;
        if ((int)uVar18 < (this->StructElements).ArrayNum) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar2)();
          return pFVar9;
        }
        this_00 = *(FShaderValueType **)((this->StructElements).AllocatorInstance.Data + uVar22 + 8)
        ;
        if (this_00->bIsDynamicArray == false) {
          if ((this_00->StructElements).ArrayNum < 1) {
            iVar7 = GetResourceElementSize(this_00);
          }
          else {
            uVar16 = uVar6;
            if ((int)uVar18 < (int)local_190) {
              uVar16 = uVar21;
            }
            if ((uVar16 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar2)();
              return pFVar9;
            }
            iVar7 = *(int *)(local_198.Data + uVar23 * 4);
          }
        }
        else {
          iVar7 = 8;
        }
        uVar16 = uVar6;
        if ((int)uVar18 < (int)local_170) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar2)();
          return pFVar9;
        }
        *(int *)(local_178.Data + uVar23 * 4) = *(int *)(local_178.Data + uVar23 * 4) + iVar7;
        uVar16 = uVar17;
        if ((int)uVar18 < (int)local_190) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar2)();
          return pFVar9;
        }
        local_15c = *(int *)(local_198.Data + uVar23 * 4) - iVar7;
        if (((local_188.Data <= (FScriptContainerElement *)&local_15c) &&
            ((FScriptContainerElement *)&local_15c < local_188.Data + (longlong)local_180._4_4_ * 4)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar2)();
          return pFVar9;
        }
        iVar7 = (int)local_180;
        if ((int)local_180 == local_180._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_188,(int *)((longlong)&local_180 + 4));
        }
        local_180 = CONCAT44(local_180._4_4_,iVar7 + 1);
        *(int *)(local_188.Data + (longlong)iVar7 * 4) = local_15c;
        uVar16 = (this->StructElements).ArrayNum;
        uVar19 = (ulonglong)(uVar18 + 1);
        uVar22 = uVar22 + 0x10;
        uVar23 = uVar23 + 1;
      } while ((int)(uVar18 + 1) < (int)uVar16);
    }
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = 0;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar16,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
    }
    if (0 < (this->StructElements).ArrayNum) {
      local_120 = 0;
      local_e0 = 0;
      local_118 = 0;
      do {
        lVar3 = local_e0;
        lVar13 = local_118;
        uVar18 = (uint)uVar11;
        uVar21 = ~uVar18 >> 0x1f;
        uVar16 = uVar17;
        if ((int)uVar18 < (this->StructElements).ArrayNum) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar2)();
          return pFVar9;
        }
        this_01 = (FName *)((this->StructElements).AllocatorInstance.Data + lVar3);
        local_e8 = *(FName *)((longlong)this_01[1] + 4);
        pFVar10 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                  ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                          *)param_1,*(FName *)((longlong)this_01[1] + 4));
        if (pFVar10 != (FName *)0x0) {
          local_e8 = *pFVar10;
        }
        ::FName::ToString(this_01,&local_b0);
        ToString((FShaderValueType *)this_01[1],&local_c0,&local_e8);
        ::FString::PrintfImpl(&local_150,L"    %s %s;\n");
        if (((local_1a8.Data <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 <
             local_1a8.Data + (longlong)local_1a0._4_4_ * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar2)();
          return pFVar9;
        }
        iVar7 = (int)local_1a0;
        if ((int)local_1a0 == local_1a0._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_1a8,(int *)((longlong)&local_1a0 + 4));
        }
        local_1a0 = CONCAT44(local_1a0._4_4_,iVar7 + 1);
        pFVar12 = local_1a8.Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_150.Data.AllocatorInstance.Data;
        *(int *)(pFVar12 + 8) = local_150.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_150.Data.ArrayMax;
        local_150.Data.ArrayNum = 0;
        local_150.Data.ArrayMax = 0;
        local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        lVar3 = local_120;
        uVar16 = uVar17;
        if ((int)uVar18 < (int)local_180) {
          uVar16 = uVar21;
        }
        if (uVar16 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar2)();
            return pFVar9;
          }
        }
        if (0 < *(int *)(local_188.Data + lVar13)) {
          uVar16 = uVar17;
          if ((int)uVar18 < (int)local_180) {
            uVar16 = uVar21;
          }
          iVar7 = (int)local_180;
          if (uVar16 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar2)();
              return pFVar9;
            }
            iVar7 = (int)local_180;
          }
          uVar16 = *(uint *)(local_188.Data + lVar3 * 4) & 0x80000003;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
          }
          if (uVar16 == 0) {
            uVar16 = uVar17;
            if ((int)uVar18 < iVar7) {
              uVar16 = uVar21;
            }
            if ((uVar16 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar2)();
              return pFVar9;
            }
            pwVar14 = L"";
            iVar7 = *(int *)(local_188.Data + lVar3 * 4);
            if (param_2) {
              pwVar14 = L"// ";
            }
            ::FString::FString(&local_d0,pwVar14);
            if (iVar7 - 4U < 4) {
              uVar16 = uVar17;
              if ((int)uVar18 < (int)local_170) {
                uVar16 = uVar21;
              }
              if ((uVar16 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                pFVar9 = (FString *)(*pcVar2)();
                return pFVar9;
              }
              ::FName::ToString(this_01,&local_a0);
              ::FString::PrintfImpl(&local_140,L"    %sfloat Padding_%s_%d;\n");
              if (((local_1a8.Data <= (FScriptContainerElement *)&local_140) &&
                  ((FScriptContainerElement *)&local_140 <
                   local_1a8.Data + (longlong)local_1a0._4_4_ * 0x10)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                pFVar9 = (FString *)(*pcVar2)();
                return pFVar9;
              }
              iVar7 = (int)local_1a0;
              if ((int)local_1a0 == local_1a0._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_1a8,(int *)((longlong)&local_1a0 + 4));
              }
              local_1a0 = CONCAT44(local_1a0._4_4_,iVar7 + 1);
              pFVar12 = local_1a8.Data + (longlong)iVar7 * 0x10;
              *(undefined8 *)pFVar12 = 0;
              *(FScriptContainerElement **)pFVar12 = local_140.Data.AllocatorInstance.Data;
              *(int *)(pFVar12 + 8) = local_140.Data.ArrayNum;
              *(int *)(pFVar12 + 0xc) = local_140.Data.ArrayMax;
              local_140.Data.ArrayNum = 0;
              local_140.Data.ArrayMax = 0;
              local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar15.Data = local_a0.Data.AllocatorInstance.Data;
            }
            else {
              uVar16 = uVar6;
              if ((int)uVar18 < (int)local_170) {
                uVar16 = uVar21;
              }
              if ((uVar16 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                pFVar9 = (FString *)(*pcVar2)();
                return pFVar9;
              }
              ::FName::ToString(this_01,&local_90);
              ::FString::PrintfImpl(&local_130,L"    %sfloat Padding_%s_%d[%d];\n");
              if (((local_1a8.Data <= (FScriptContainerElement *)&local_130) &&
                  ((FScriptContainerElement *)&local_130 <
                   local_1a8.Data + (longlong)local_1a0._4_4_ * 0x10)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                pFVar9 = (FString *)(*pcVar2)();
                return pFVar9;
              }
              iVar7 = (int)local_1a0;
              if ((int)local_1a0 == local_1a0._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_1a8,(int *)((longlong)&local_1a0 + 4));
              }
              local_1a0 = CONCAT44(local_1a0._4_4_,iVar7 + 1);
              pFVar12 = local_1a8.Data + (longlong)iVar7 * 0x10;
              *(undefined8 *)pFVar12 = 0;
              *(FScriptContainerElement **)pFVar12 = local_130.Data.AllocatorInstance.Data;
              *(int *)(pFVar12 + 8) = local_130.Data.ArrayNum;
              *(int *)(pFVar12 + 0xc) = local_130.Data.ArrayMax;
              local_130.Data.ArrayNum = 0;
              local_130.Data.ArrayMax = 0;
              local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar15.Data = local_90.Data.AllocatorInstance.Data;
            }
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar15.Data);
            }
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
          }
          else {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<297563889841734123>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ShaderParamTypeDefinition.cpp"
                               ,0x1eb,"Pads[Index] % 4 == 0");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar2)();
              return pFVar9;
            }
          }
        }
        uVar11 = (ulonglong)(uVar18 + 1);
        local_118 = local_118 + 4;
        local_e0 = local_e0 + 0x10;
        local_120 = local_120 + 1;
      } while ((int)(uVar18 + 1) < (this->StructElements).ArrayNum);
    }
    local_d8 = this->Name;
    pFVar10 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
              ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                      *)param_1,local_d8);
    if (pFVar10 != (FName *)0x0) {
      local_d8 = *pFVar10;
    }
    iVar7 = (int)local_1a0;
    uVar11 = (ulonglong)(int)local_1a0;
    bVar5 = true;
    pFVar12 = local_1a8.Data + uVar11 * 0x10;
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    FVar15.Data = local_1a8.Data;
    while( true ) {
      if ((int)uVar11 != iVar7) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_157);
      }
      if (FVar15.Data == pFVar12) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        ::FString::AppendChars(&local_110,L"",0);
      }
      iVar20 = *(int *)(FVar15.Data + 8) + -1;
      if (*(int *)(FVar15.Data + 8) == 0) {
        iVar20 = 0;
      }
      ::FString::AppendChars(&local_110,*(wchar_t **)FVar15.Data,iVar20);
      uVar11 = local_1a0 & 0xffffffff;
      FVar15.Data = FVar15.Data + 0x10;
    }
    ::FName::ToString(&local_d8,&local_80);
    ::FString::PrintfImpl(__return_storage_ptr__,L"struct %s {\n%s}");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_1a8.Data,(int)local_1a0);
    if (local_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    iVar7 = local_100.AllocatedMetadatas.ArrayNum;
    pFVar12 = local_100.AllocatedMetadatas.AllocatorInstance.Data +
              (longlong)local_100.AllocatedMetadatas.ArrayNum * 8;
    FVar15.Data = local_100.AllocatedMetadatas.AllocatorInstance.Data;
    while( true ) {
      if (local_100.AllocatedMetadatas.ArrayNum != iVar7) {
        `TCheckedPointerIterator<FShaderParametersMetadata_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_156);
      }
      if (FVar15.Data == pFVar12) break;
      puVar1 = *(undefined8 **)FVar15.Data;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_100.AllocatedMetadatas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatedMetadatas.AllocatorInstance.Data);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<297563889841734048>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ShaderParamTypeDefinition.cpp"
                       ,0x1a0,"MemberDatas.Num() == StructElements.Num()");
    iVar7 = local_100.AllocatedMetadatas.ArrayNum;
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FString *)(*pcVar2)();
      return pFVar9;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    pFVar12 = local_100.AllocatedMetadatas.AllocatorInstance.Data +
              (longlong)local_100.AllocatedMetadatas.ArrayNum * 8;
    FVar15.Data = local_100.AllocatedMetadatas.AllocatorInstance.Data;
    while( true ) {
      if (local_100.AllocatedMetadatas.ArrayNum != iVar7) {
        `TCheckedPointerIterator<FShaderParametersMetadata_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_158);
      }
      if (FVar15.Data == pFVar12) break;
      puVar1 = *(undefined8 **)FVar15.Data;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_100.AllocatedMetadatas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatedMetadatas.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetZeroValueAsString @ 1494d3550

FString * __thiscall
FShaderValueType::GetZeroValueAsString(FShaderValueType *this,FString *__return_storage_ptr__)

{
  EShaderFundamentalType EVar1;
  EShaderFundamentalDimensionType EVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 local_res8 [8];
  FString *local_res10;
  FName local_res18;
  ForAnyElementType local_78;
  uint local_70;
  uint local_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  
  EVar1 = this->Type;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_res10 = __return_storage_ptr__;
  if (EVar1 < Struct) {
    if (EVar1 == Float) {
      ::FString::operator=(&local_68,L"0.0f");
    }
    else if (EVar1 == Bool) {
      ::FString::operator=(&local_68,L"false");
    }
    else if ((EVar1 == Int) || (EVar1 == Uint)) {
      ::FString::operator=(&local_68,L"0");
    }
  }
  else if (EVar1 == Struct) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != EShaderFundamentalType::Struct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ShaderParamTypeDefinition.cpp"
                       ,0x260,L"Structs not supported yet.");
    if (bVar4) goto code_r0x0001494d363b;
  }
  else if ((EVar1 == None) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ShaderParamTypeDefinition.cpp"
                              ,0x253,L""), bVar4)) {
code_r0x0001494d363b:
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  EVar2 = this->DimensionType;
  uVar6 = 0;
  if (EVar2 == Scalar) {
    uVar6 = 1;
  }
  else if (EVar2 == Vector) {
    uVar6 = (uint)(this->field2_0x2).VectorElemCount;
  }
  else if (EVar2 == Matrix) {
    uVar6 = (uint)this->MatrixColumnCount * (uint)(this->field2_0x2).VectorElemCount;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_6c = 0;
  DestructItems<FString,int>((FString *)0x0,0);
  local_70 = 0;
  if (local_6c != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar6,&local_78,0,(int *)&local_6c);
  }
  if (uVar6 != 0) {
    uVar10 = (ulonglong)uVar6;
    do {
      if (((local_78.Data <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < local_78.Data + (longlong)(int)local_6c * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
      if (local_70 == local_6c) {
        local_70 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_78,(int *)&local_6c);
      }
      FVar9.Data = local_68.Data.AllocatorInstance.Data;
      lVar7 = (longlong)(int)local_70;
      local_70 = local_70 + 1;
      pFVar8 = local_78.Data + lVar7 * 0x10;
      *(FScriptContainerElement **)pFVar8 = (FScriptContainerElement *)0x0;
      lVar7 = (longlong)local_68.Data.ArrayNum;
      *(int *)(pFVar8 + 8) = local_68.Data.ArrayNum;
      if (local_68.Data.ArrayNum == 0) {
        *(int *)(pFVar8 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar8,local_68.Data.ArrayNum,
                   (int *)(pFVar8 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar8,FVar9.Data,lVar7 * 2);
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar6 = local_70;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar4 = true;
  pFVar8 = local_78.Data + (longlong)(int)local_70 * 0x10;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FVar9.Data = local_78.Data;
  while( true ) {
    if (local_70 != uVar6) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar9.Data == pFVar8) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      ::FString::AppendChars(&local_58,L", ",2);
    }
    iVar11 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_58,*(wchar_t **)FVar9.Data,iVar11);
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  ToString(this,&local_48,&local_res18);
  pFVar5 = local_res10;
  ::FString::PrintfImpl(local_res10,L"%s(%s)");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.Data,local_70);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return pFVar5;
}

// MakeDynamicArrayType @ 1494d4810

FShaderValueTypeHandle __cdecl
FShaderValueType::MakeDynamicArrayType(FShaderValueTypeHandle *param_1)

{
  FShaderValueTypeHandle FVar1;
  FShaderValueType local_28;
  
  FShaderValueType(&local_28,param_1->ValueTypePtr);
  local_28.bIsDynamicArray = true;
  FVar1 = GetOrCreate(&local_28);
  if (local_28.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StructElements.AllocatorInstance.Data);
  }
  return (FShaderValueTypeHandle)FVar1.ValueTypePtr;
}

// ToString @ 1494da3b0

FString * __thiscall
FShaderValueType::ToString(FShaderValueType *this,FString *__return_storage_ptr__,FName *param_1)

{
  EShaderFundamentalType EVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  EVar1 = this->Type;
  if (EVar1 == Bool) {
    ::FString::FString(&local_58,"bool");
    local_28.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_58) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else if (EVar1 == Int) {
    ::FString::FString(&local_68,"int");
    local_28.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_68) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else if (EVar1 == Uint) {
    ::FString::FString(&local_78,"uint");
    local_28.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_78) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else if (EVar1 == Float) {
    ::FString::FString(&local_88,"float");
    local_28.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_88) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_88.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    if (EVar1 != Struct) goto LAB_1494da5ea;
    FVar2 = *param_1;
    if (FVar2 == (FName)0x0) {
      param_1 = &this->Name;
    }
    pFVar4 = &local_38;
    if (FVar2 != (FName)0x0) {
      pFVar4 = &local_28;
    }
    pFVar4 = ::FName::ToString(param_1,pFVar4);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (((2U - (FVar2 != (FName)0x0) & 2) != 0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (FVar2 == (FName)0x0) goto LAB_1494da5ea;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_1494da5ea:
  if (this->Type != Struct) {
    if (this->DimensionType == Vector) {
      ::FString::AppendfImpl(__return_storage_ptr__,L"%d");
    }
    else if (this->DimensionType == Matrix) {
      ::FString::AppendfImpl(__return_storage_ptr__,L"%dx%d");
    }
  }
  if (this->bIsDynamicArray != false) {
    ::FString::PrintfImpl(&local_48,L"StructuredBuffer<%s>");
    if (__return_storage_ptr__ != &local_48) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

