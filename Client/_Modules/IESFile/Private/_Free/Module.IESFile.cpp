// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IESFile
// Functions: 8

// `dynamic_initializer_for_'LogIESLoader'' @ 141425080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIESLoader__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIESLoader,L"LogIESLoader",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIESLoader__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantIESFile'' @ 1414250c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantIESFile__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "IESFile";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"IESFile",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// MakeShared<FIESLoader,1,unsigned_char_const_*_&,unsigned_int_&> @ 14e6716f0

TSharedRef<FIESLoader,1> * __cdecl
MakeShared<FIESLoader,1,unsigned_char_const_*_&,unsigned_int_&>
          (TSharedRef<FIESLoader,1> *__return_storage_ptr__,uchar **param_1,uint *param_2)

{
  uchar *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FIESLoader,1> *pTVar5;
  uint uVar6;
  ForAnyElementType local_28;
  int local_20 [2];
  
  pTVar4 = operator_new(0x60);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FIESLoader *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFIESLoader___00_SharedPointerInternals__6B_
    ;
    uVar6 = *param_2;
    _Src = *param_1;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar4[4]._padding_ + 4) = 0x7f7fffff;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x1;
    FString::FString((FString *)(pTVar4 + 5),L"No data loaded");
    if ((int)pTVar4[5].SharedReferenceCount < 2) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                         ,0x77,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<FIESLoader,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20[0] = 0;
    local_20[1] = 0;
    uVar3 = 0x7ffffffe;
    if (uVar6 < 0x7ffffffe) {
      uVar3 = uVar6;
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3 + 1,&local_28,local_20,local_20 + 1);
    memcpy(local_28.Data,_Src,(ulonglong)uVar3);
    uVar6 = 0;
    if ((int)uVar3 < local_20[0]) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<FIESLoader,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    local_28.Data[(int)uVar3] = (FScriptContainerElement)0x0;
    FIESLoader::Load((FIESLoader *)(pTVar4 + 1),(uchar *)local_28.Data);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    __return_storage_ptr__->Object = (FIESLoader *)(pTVar4 + 1);
    if ((FIESLoader *)(pTVar4 + 1) == (FIESLoader *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<FIESLoader,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14e671d40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIESLoader,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FIESLoader,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// GetFloat @ 14e672720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl GetFloat(uchar **param_1,float *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 auStack_138 [32];
  byte local_118 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pbVar4 = *param_1;
  bVar2 = *pbVar4;
  while (bVar2 != 0) {
    if (bVar2 == 0xd) {
      if (pbVar4[1] != 10) goto LAB_14e672768;
      pbVar4 = pbVar4 + 2;
    }
    else {
      if (0x20 < bVar2) break;
LAB_14e672768:
      pbVar4 = pbVar4 + 1;
    }
    *param_1 = pbVar4;
    bVar2 = *pbVar4;
  }
  pbVar4 = local_118;
  uVar6 = 0;
  while( true ) {
    pbVar3 = *param_1;
    bVar2 = *pbVar3;
    if (bVar2 == 0) break;
    pbVar1 = pbVar3 + 1;
    if (bVar2 == 0xd) {
      if (*pbVar1 == 10) {
        *param_1 = pbVar3 + 2;
      }
      else {
LAB_14e6727c9:
        *param_1 = pbVar1;
      }
      break;
    }
    if (bVar2 == 10) {
      *param_1 = pbVar1;
      break;
    }
    if (bVar2 < 0x21) goto LAB_14e6727c9;
    *pbVar4 = bVar2;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    pbVar4 = pbVar4 + 1;
    *param_1 = pbVar1;
    if (0xfe < uVar5) break;
  }
  local_118[uVar6] = 0;
  dVar7 = atof((char *)local_118);
  *param_2 = (float)dVar7;
  return true;
}

// GetInt @ 14e672870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl GetInt(uchar **param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_138 [32];
  byte local_118 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pbVar5 = *param_1;
  bVar2 = *pbVar5;
  while (bVar2 != 0) {
    if (bVar2 == 0xd) {
      if (pbVar5[1] != 10) goto LAB_14e6728b8;
      pbVar5 = pbVar5 + 2;
    }
    else {
      if (0x20 < bVar2) break;
LAB_14e6728b8:
      pbVar5 = pbVar5 + 1;
    }
    *param_1 = pbVar5;
    bVar2 = *pbVar5;
  }
  pbVar5 = local_118;
  uVar7 = 0;
  while( true ) {
    pbVar3 = *param_1;
    bVar2 = *pbVar3;
    if (bVar2 == 0) break;
    pbVar1 = pbVar3 + 1;
    if (bVar2 == 0xd) {
      if (*pbVar1 == 10) {
        *param_1 = pbVar3 + 2;
      }
      else {
LAB_14e672919:
        *param_1 = pbVar1;
      }
      break;
    }
    if (bVar2 == 10) {
      *param_1 = pbVar1;
      break;
    }
    if (bVar2 < 0x21) goto LAB_14e672919;
    *pbVar5 = bVar2;
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    pbVar5 = pbVar5 + 1;
    *param_1 = pbVar1;
    if (0xfe < uVar6) break;
  }
  local_118[uVar7] = 0;
  iVar4 = atoi((char *)local_118);
  *param_2 = iVar4;
  return true;
}

// IMPLEMENT_MODULE_IESFile @ 14e673c50

void __cdecl IMPLEMENT_MODULE_IESFile(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogIESLoader'' @ 150467e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIESLoader__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIESLoader);
  return;
}

