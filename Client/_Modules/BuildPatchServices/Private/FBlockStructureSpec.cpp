// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// GetTestFlags @ 1432704a0

EAutomationTestFlags __thiscall FBlockStructureSpec::GetTestFlags(FBlockStructureSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 1432704b0

FString * __thiscall
FBlockStructureSpec::GetTestSourceFileName
          (FBlockStructureSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\BlockStructure.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1432704e0

int __thiscall FBlockStructureSpec::GetTestSourceFileLine(FBlockStructureSpec *this)

{
  return 0x54;
}

// GetBeautifiedTestName @ 1432704f0

FString * __thiscall
FBlockStructureSpec::GetBeautifiedTestName
          (FBlockStructureSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 143270520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBlockStructureSpec::Define(FBlockStructureSpec *this)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  FBlockStructureSpec *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  ::FString::FString((FString *)local_88,L"FromStart");
  ::FString::FString((FString *)local_78,L"FromEnd");
  DestructItems<FString,int>
            ((FString *)(this->DirNames).AllocatorInstance.Data,(this->DirNames).ArrayNum);
  TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
            (&this->DirNames,(FString *)local_88,2,(this->DirNames).ArrayMax);
  puVar4 = local_68;
  lVar3 = 2;
  do {
    puVar1 = (undefined8 *)(puVar4 + -0x10);
    puVar4 = puVar4 + -0x10;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  piVar2 = &(this->DirTypes).ArrayMax;
  (this->DirTypes).ArrayNum = 2;
  local_88._0_8_ = &DAT_100000000;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,*piVar2,&(this->DirTypes).AllocatorInstance,2,piVar2);
  local_58._0_8_ = 10;
  local_58._8_8_ = 5;
  *(undefined8 *)(this->DirTypes).AllocatorInstance.Data = local_88._0_8_;
  local_48 = (undefined **)0x14;
  local_40 = (FBlockStructureSpec *)0x7;
  local_38 = 0x1e;
  local_30 = 3;
  local_28 = 0x28;
  local_20 = 5;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned___int64,int>
            (&this->SetupBlocks,(ulong64 *)local_58,8,(this->SetupBlocks).ArrayMax);
  local_60 = 0;
  local_78._0_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FBlockStructureSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBlockStructureSpec::Define'::__l2::<lambda_1>,void>::Call;
  local_78._8_8_ = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_88);
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FBlockStructureSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBlockStructureSpec::Define'::__l2::<lambda_2>,void>::Call;
  local_40 = this;
  ::FString::FString((FString *)local_88,"BlockStructure");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,(FString *)local_88,
             (TFunction<void___cdecl(void)> *)local_58);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// ~FBlockStructureSpec @ 143287560

void __thiscall FBlockStructureSpec::~FBlockStructureSpec(FBlockStructureSpec *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SetupBlocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DirTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DirNames).AllocatorInstance.Data,(this->DirNames).ArrayNum);
  pFVar1 = (this->DirNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BuildPatchServices::FBlockStructure::~FBlockStructure(&this->OtherStructure);
  BuildPatchServices::FBlockStructure::~FBlockStructure(&this->BlockStructure);
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 1432a79e0

void __thiscall `FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Copy Constructor");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Move Constructor");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Copy Assignment Operator");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Move Assignment Operator");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_5>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"GetHead");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_6>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_6>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"GetTail");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_7>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_7>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Empty");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_8>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_8>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Add");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_9>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_9>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Remove");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_10>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_10>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"SelectSerialBytes");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_11>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_11>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Intersect");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FBlockStructureSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_12>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FBlockStructureSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_12>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"ToString");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// EnumeratePtrs @ 1432cf970

TSet<BuildPatchServices::FBlockEntry_const_*,DefaultKeyFuncs<BuildPatchServices::FBlockEntry_const_*,0>,FDefaultSetAllocator>
* __thiscall
FBlockStructureSpec::EnumeratePtrs
          (FBlockStructureSpec *this,
          TSet<BuildPatchServices::FBlockEntry_const_*,DefaultKeyFuncs<BuildPatchServices::FBlockEntry_const_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,FBlockStructure *param_1)

{
  bool bVar1;
  FBlockEntry *this_00;
  FBlockEntry *local_res10;
  FBlockEntry *local_res20;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  bVar1 = IsLooping(this,param_1);
  if ((!bVar1) && (bVar1 = IsMirrored(this,param_1), bVar1)) {
    for (this_00 = BuildPatchServices::FBlockStructure::GetHead(param_1);
        this_00 != (FBlockEntry *)0x0; this_00 = BuildPatchServices::FBlockEntry::GetNext(this_00))
    {
      local_res20 = this_00;
      TSet<BuildPatchServices::FBlockEntry_const_*,DefaultKeyFuncs<BuildPatchServices::FBlockEntry_const_*,0>,FDefaultSetAllocator>
      ::Emplace<BuildPatchServices::FBlockEntry_const_*_const_&>
                (__return_storage_ptr__,&local_res10,(bool *)&local_res20);
    }
  }
  return __return_storage_ptr__;
}

// IsLooping @ 1432dbe50

bool __thiscall FBlockStructureSpec::IsLooping(FBlockStructureSpec *this,FBlockStructure *param_1)

{
  code *pcVar1;
  FBlockEntry *pFVar2;
  FBlockEntry *pFVar3;
  FBlockEntry *pFVar4;
  FString local_28;
  FString local_18;
  
  pFVar2 = BuildPatchServices::FBlockStructure::GetHead(param_1);
  pFVar3 = BuildPatchServices::FBlockStructure::GetHead(param_1);
  do {
    if (((pFVar2 == (FBlockEntry *)0x0) || (pFVar3 == (FBlockEntry *)0x0)) ||
       (pFVar4 = BuildPatchServices::FBlockEntry::GetNext(pFVar3), pFVar4 == (FBlockEntry *)0x0)) {
      pFVar2 = BuildPatchServices::FBlockStructure::GetTail(param_1);
      pFVar3 = BuildPatchServices::FBlockStructure::GetTail(param_1);
      do {
        if (((pFVar2 == (FBlockEntry *)0x0) || (pFVar3 == (FBlockEntry *)0x0)) ||
           (pFVar4 = BuildPatchServices::FBlockEntry::GetPrevious(pFVar3),
           pFVar4 == (FBlockEntry *)0x0)) {
          return false;
        }
        pFVar2 = BuildPatchServices::FBlockEntry::GetPrevious(pFVar2);
        pFVar3 = BuildPatchServices::FBlockEntry::GetPrevious(pFVar3);
        pFVar3 = BuildPatchServices::FBlockEntry::GetPrevious(pFVar3);
        ::FString::FString(&local_28,L"bIsLooping");
        if (pFVar2 == pFVar3) {
          pcVar1 = *(code **)(this->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
          (*pcVar1)(this,&local_18,0);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      } while (pFVar2 != pFVar3);
      return true;
    }
    pFVar2 = BuildPatchServices::FBlockEntry::GetNext(pFVar2);
    pFVar3 = BuildPatchServices::FBlockEntry::GetNext(pFVar3);
    pFVar3 = BuildPatchServices::FBlockEntry::GetNext(pFVar3);
    ::FString::FString(&local_28,L"bIsLooping");
    if (pFVar2 == pFVar3) {
      pcVar1 = *(code **)(this->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_18,0);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  } while (pFVar2 != pFVar3);
  return true;
}

// IsMirrored @ 1432dc050

bool __thiscall FBlockStructureSpec::IsMirrored(FBlockStructureSpec *this,FBlockStructure *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ForAnyElementType _Buf2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  ForAnyElementType _Buf1;
  FBlockEntry *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  FString local_30;
  FString local_20;
  
  bVar4 = false;
  bVar3 = IsLooping(this,param_1);
  if (!bVar3) {
    lVar9 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_58 = BuildPatchServices::FBlockStructure::GetHead(param_1);
    while (local_58 != (FBlockEntry *)0x0) {
      if (((local_40.Data <= (FScriptContainerElement *)&local_58) &&
          (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20), lVar7 = (longlong)local_38._4_4_,
          (FScriptContainerElement *)&local_58 < local_40.Data + lVar7 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar6 = (int)local_38;
      if ((int)local_38 == local_38._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_40,(int *)((longlong)&local_38 + 4));
      }
      local_38 = CONCAT44(local_38._4_4_,iVar6 + 1);
      *(FBlockEntry **)(local_40.Data + (longlong)iVar6 * 8) = local_58;
      local_58 = BuildPatchServices::FBlockEntry::GetNext(local_58);
    }
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    local_58 = BuildPatchServices::FBlockStructure::GetTail(param_1);
    _Buf2.Data = local_50.Data;
    _Buf1.Data = local_40.Data;
    while (local_50.Data = _Buf2.Data, local_40.Data = _Buf1.Data, local_58 != (FBlockEntry *)0x0) {
      if (((_Buf2.Data <= (FScriptContainerElement *)&local_58) &&
          (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20), lVar7 = (longlong)local_48._4_4_,
          (FScriptContainerElement *)&local_58 < _Buf2.Data + lVar7 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar6 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_50,(int *)((longlong)&local_48 + 4));
      }
      local_48 = CONCAT44(local_48._4_4_,iVar6 + 1);
      *(FBlockEntry **)(local_50.Data + (longlong)iVar6 * 8) = local_58;
      local_58 = BuildPatchServices::FBlockEntry::GetPrevious(local_58);
      _Buf2.Data = local_50.Data;
      _Buf1.Data = local_40.Data;
    }
    if (0 < (int)local_48 / 2) {
      pFVar8 = _Buf2.Data + (longlong)((int)local_48 + -1) * 8;
      do {
        uVar1 = *(undefined8 *)(_Buf2.Data + lVar9 * 8);
        *(undefined8 *)(_Buf2.Data + lVar9 * 8) = *(undefined8 *)pFVar8;
        lVar9 = lVar9 + 1;
        *(undefined8 *)pFVar8 = uVar1;
        pFVar8 = pFVar8 + -8;
      } while (lVar9 < (int)local_48 / 2);
    }
    bVar3 = (int)local_38 == (int)local_48;
    bVar4 = false;
    if ((bVar3) &&
       (((int)local_38 == 0 ||
        (iVar6 = memcmp(_Buf1.Data,_Buf2.Data,(longlong)(int)local_38 << 3), iVar6 == 0)))) {
      bVar4 = true;
    }
    if (_Buf2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Buf2.Data);
      _Buf1.Data = local_40.Data;
    }
    if (_Buf1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Buf1.Data);
    }
  }
  ::FString::FString(&local_30,L"bMirrored");
  if (bVar4 != true) {
    pcVar2 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_20,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_20,0);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// ToArrayU64 @ 1432f4390

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
FBlockStructureSpec::ToArrayU64
          (FBlockStructureSpec *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FBlockStructure *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBlockEntry *this_00;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar5;
  ulong64 local_18;
  ulong64 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar3 = IsLooping(this,param_1);
  if ((!bVar3) && (bVar3 = IsMirrored(this,param_1), bVar3)) {
    for (this_00 = BuildPatchServices::FBlockStructure::GetHead(param_1);
        this_00 != (FBlockEntry *)0x0; this_00 = BuildPatchServices::FBlockEntry::GetNext(this_00))
    {
      local_18 = BuildPatchServices::FBlockEntry::GetOffset(this_00);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
          ((FScriptContainerElement *)&local_18 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(ulong64 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_18;
      local_10 = BuildPatchServices::FBlockEntry::GetSize(this_00);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_10) &&
          ((FScriptContainerElement *)&local_10 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(ulong64 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_10;
    }
  }
  return __return_storage_ptr__;
}

