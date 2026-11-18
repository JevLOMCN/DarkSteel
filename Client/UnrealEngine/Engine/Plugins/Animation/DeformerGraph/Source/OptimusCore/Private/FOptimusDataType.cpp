// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticStruct @ 14e11b680

UScriptStruct * __cdecl FOptimusDataType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusDataType.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusDataType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDataType,(UObject *)pUVar1,
                         L"OptimusDataType");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusDataType.OuterSingleton;
}

// operator= @ 14e165660

FOptimusDataType * __thiscall
FOptimusDataType::operator=(FOptimusDataType *this,FOptimusDataType *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  this->TypeName = param_1->TypeName;
  pIVar1 = (param_1->DisplayName).TextData.Reference;
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayName).Flags = (param_1->DisplayName).Flags;
  (this->ShaderValueType).ValueTypePtr = (param_1->ShaderValueType).ValueTypePtr;
  this->ShaderValueSize = param_1->ShaderValueSize;
  this->TypeCategory = param_1->TypeCategory;
  (this->TypeObject).WeakPtr = (param_1->TypeObject).WeakPtr;
  this->bHasCustomPinColor = param_1->bHasCustomPinColor;
  uVar3 = *(undefined8 *)((longlong)&(param_1->CustomPinColor).field0_0x0 + 8);
  *(undefined8 *)&(this->CustomPinColor).field0_0x0 =
       *(undefined8 *)&(param_1->CustomPinColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->CustomPinColor).field0_0x0 + 8) = uVar3;
  this->UsageFlags = param_1->UsageFlags;
  this->TypeFlags = param_1->TypeFlags;
  return this;
}

// CanCreateProperty @ 14e1819b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOptimusDataType::CanCreateProperty(FOptimusDataType *this)

{
  FOptimusDataTypeRegistry *pFVar1;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pFVar1 = FOptimusDataTypeRegistry::Get();
  pTVar2 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar1->RegisteredTypes,this->TypeName);
  puVar3 = &pTVar2->field_0x10;
  if (pTVar2 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 == (undefined1 *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    return false;
  }
  local_48 = *(longlong *)(puVar3 + 0x10);
  local_20 = (longlong *)0x0;
  bVar6 = local_48 == 0;
  if (!bVar6) {
    puVar4 = (undefined8 *)(puVar3 + 0x20);
    if (*(undefined8 **)(puVar3 + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(puVar3 + 0x38);
    }
    (**(code **)*puVar4)(puVar4,local_38);
    bVar6 = local_48 == 0;
  }
  if (local_48 != 0) {
    plVar5 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar5 = local_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return !bVar6;
}

// ConvertPropertyValueToShader @ 14e195c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOptimusDataType::ConvertPropertyValueToShader
          (FOptimusDataType *this,TArrayView<unsigned_char_const_,int> *param_1,
          FShaderValueContainer *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FOptimusDataTypeRegistry *pFVar6;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  uchar *local_78;
  undefined8 uStack_70;
  FScriptContainerElement *local_68;
  undefined8 uStack_60;
  FScriptContainerElement *local_58;
  undefined8 uStack_50;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar6 = FOptimusDataTypeRegistry::Get();
  pTVar7 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar6->RegisteredTypes,this->TypeName);
  puVar9 = &pTVar7->field_0x10;
  if (pTVar7 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar9 = (undefined1 *)0x0;
  }
  if (puVar9 == (undefined1 *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
  }
  else {
    local_48 = *(code **)(puVar9 + 0x40);
    local_20 = (longlong *)0x0;
    if (local_48 != (code *)0x0) {
      puVar10 = (undefined8 *)(puVar9 + 0x50);
      if (*(undefined8 **)(puVar9 + 0x68) != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)(puVar9 + 0x68);
      }
      (**(code **)*puVar10)(puVar10,local_38);
    }
    if (local_48 != (code *)0x0) {
      local_98 = (param_2->ShaderValue).AllocatorInstance.Data;
      iVar1 = (param_2->ShaderValue).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_88 = (param_2->ArrayList).AllocatorInstance.Data;
      iVar2 = (param_2->ArrayList).ArrayNum;
      iStack_90 = iVar1;
      if ((iVar2 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uStack_60 = CONCAT44(uStack_8c,iStack_90);
      uStack_50 = CONCAT44(uStack_7c,iVar2);
      local_68 = local_98;
      local_78 = param_1->DataPtr;
      uStack_70 = *(undefined8 *)&param_1->ArrayNum;
      local_58 = local_88;
      iStack_80 = iVar2;
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar3 = local_48;
      plVar11 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar11 = local_20;
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      uVar5 = (*pcVar3)(uVar8,&local_78,&local_68);
      if (local_48 == (code *)0x0) {
        return (bool)uVar5;
      }
      plVar11 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar11 = local_20;
      }
      (**(code **)(*plVar11 + 0x10))();
      return (bool)uVar5;
    }
  }
  return false;
}

// CreateProperty @ 14e19ff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FProperty * __thiscall
FOptimusDataType::CreateProperty(FOptimusDataType *this,UStruct *param_1,FName param_2)

{
  code *pcVar1;
  FOptimusDataTypeRegistry *pFVar2;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  undefined8 uVar4;
  FProperty *pFVar5;
  longlong *plVar6;
  FProperty *pFVar7;
  undefined1 auStack_78 [32];
  FName local_58;
  ulonglong local_50;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = FOptimusDataTypeRegistry::Get();
  pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar2->RegisteredTypes,this->TypeName);
  pFVar5 = (FProperty *)0x0;
  pFVar7 = (FProperty *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pFVar7 = pFVar5;
  }
  if (pFVar7 == (FProperty *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
  }
  else {
    local_48 = (code *)pFVar7->_padding_;
    local_20 = (longlong *)0x0;
    if (local_48 != (code *)0x0) {
      plVar6 = &pFVar7->_padding_;
      if ((longlong *)pFVar7->PropertyFlags != (longlong *)0x0) {
        plVar6 = (longlong *)pFVar7->PropertyFlags;
      }
      (**(code **)*plVar6)(plVar6,local_38);
      if (local_48 != (code *)0x0) {
        local_50 = (ulonglong)param_1 | 1;
        if (((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe));
        }
        local_58 = param_2;
        UE::Core::Private::Function::CheckCallable(local_48);
        pcVar1 = local_48;
        plVar6 = local_38;
        if (local_20 != (longlong *)0x0) {
          plVar6 = local_20;
        }
        uVar4 = (**(code **)(*plVar6 + 8))();
        pFVar5 = (FProperty *)(*pcVar1)(uVar4,&local_50,&local_58);
        if (local_48 != (code *)0x0) {
          plVar6 = local_38;
          if (local_20 != (longlong *)0x0) {
            plVar6 = local_20;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
  }
  return pFVar5;
}

// GetArrayElementShaderValueSize @ 14e1b9e10

int __thiscall FOptimusDataType::GetArrayElementShaderValueSize(FOptimusDataType *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FOptimusDataTypeRegistry *this_00;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  FOptimusDataTypeRegistry::FindArrayMetadata(this_00,&local_18,this->TypeName);
  if (-1 < param_1) {
    if (param_1 < local_18.ArrayNum) {
      uVar3 = 0;
      if (param_1 < local_18.ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      iVar4 = *(int *)(local_18.AllocatorInstance.Data + (longlong)param_1 * 8);
      goto LAB_14e1b9ec5;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8766186752609091731>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataType.cpp"
                     ,0x93,"ArrayMetadata.IsValidIndex(InArrayIndex)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  iVar4 = -1;
LAB_14e1b9ec5:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return iVar4;
}

// GetArrayShaderValueOffset @ 14e1b9ef0

int __thiscall FOptimusDataType::GetArrayShaderValueOffset(FOptimusDataType *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FOptimusDataTypeRegistry *this_00;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  FOptimusDataTypeRegistry::FindArrayMetadata(this_00,&local_18,this->TypeName);
  if (-1 < param_1) {
    if (param_1 < local_18.ArrayNum) {
      uVar3 = 0;
      if (param_1 < local_18.ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      iVar4 = *(int *)(local_18.AllocatorInstance.Data + (longlong)param_1 * 8 + 4);
      goto LAB_14e1b9fa6;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8766186752609091718>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataType.cpp"
                     ,0x86,"ArrayMetadata.IsValidIndex(InArrayIndex)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  iVar4 = -1;
LAB_14e1b9fa6:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return iVar4;
}

// GetNumArrays @ 14e1cb8d0

int __thiscall FOptimusDataType::GetNumArrays(FOptimusDataType *this)

{
  FOptimusDataTypeRegistry *this_00;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  FOptimusDataTypeRegistry::FindArrayMetadata(this_00,&local_18,this->TypeName);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return local_18.ArrayNum;
}

// IsArrayType @ 14e1ee990

bool __thiscall FOptimusDataType::IsArrayType(FOptimusDataType *this)

{
  ForAnyElementType FVar1;
  bool bVar2;
  FString *this_00;
  int iVar3;
  FString local_28;
  FString local_18;
  
  this_00 = ::FName::ToString(&this->TypeName,&local_18);
  ::FString::FString(&local_28,"TArray<");
  iVar3 = local_28.Data.ArrayNum + -1;
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  bVar2 = ::FString::StartsWith(this_00,(wchar_t *)FVar1.Data,iVar3,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// MakeShaderValue @ 14e1f1a40

FShaderValueContainer * __thiscall
FOptimusDataType::MakeShaderValue
          (FOptimusDataType *this,FShaderValueContainer *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  FOptimusDataTypeRegistry *this_00;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  FOptimusDataTypeRegistry::FindArrayMetadata(this_00,&local_18,this->TypeName);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  uVar5 = this->ShaderValueSize;
  piVar1 = &(__return_storage_ptr__->ShaderValue).ArrayNum;
  piVar2 = &(__return_storage_ptr__->ShaderValue).ArrayMax;
  (__return_storage_ptr__->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(__return_storage_ptr__->ArrayList).ArrayNum;
  *piVar1 = 0;
  piVar4 = &(__return_storage_ptr__->ArrayList).ArrayMax;
  *piVar2 = 0;
  (__return_storage_ptr__->ArrayList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar4 = 0;
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar5,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_18.ArrayNum,&(__return_storage_ptr__->ArrayList).AllocatorInstance
                     ,piVar3,piVar4);
  DefaultConstructItems<FArrayShaderValue,int>
            ((__return_storage_ptr__->ArrayList).AllocatorInstance.Data + (longlong)iVar6 * 0x10,
             local_18.ArrayNum);
  return __return_storage_ptr__;
}

