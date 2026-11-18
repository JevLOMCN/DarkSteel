// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// SetCompileArgument<bool> @ 144725880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FShaderCompilerEnvironment::SetCompileArgument<bool>
          (FShaderCompilerEnvironment *this,wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  TPairInitializer<FString_&&,TVariant<bool,float,int,unsigned_int,FString>_&&> local_58;
  uchar *local_48;
  TVariant<bool,float,int,unsigned_int,FString> local_40;
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_20 = 0;
  local_40.TypeIndex = param_2;
  ::FString::FString((FString *)&local_40,param_1);
  local_58.Value = &local_40;
  local_48 = &local_40.TypeIndex;
  TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TVariant<bool,float,int,unsigned_int,FString>_&&>_>
            ((TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
              *)&this->CompileArgs,&local_58,(bool *)&local_58.Value);
  if ((void *)local_40._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_40._padding_);
  }
  uVar3 = (ulonglong)local_20;
  if (4 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,float,int,unsigned_int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3] != UE::Core::Private::TDestructorCaller<bool>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,float,int,unsigned_int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(&local_40.TypeIndex);
  }
  return;
}

// SetDefineAndCompileArgument<bool> @ 1447f1d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FShaderCompilerEnvironment::SetDefineAndCompileArgument<bool>
          (FShaderCompilerEnvironment *this,wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  TPairInitializer<FString_&&,TVariant<bool,float,int,unsigned_int,FString>_&&> local_68;
  uchar *local_58;
  TVariant<bool,float,int,unsigned_int,FString> local_50;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  SetDefine(this,param_1,param_2);
  local_30 = 0;
  local_50.TypeIndex = param_2;
  ::FString::FString((FString *)&local_50,param_1);
  local_68.Value = &local_50;
  local_58 = &local_50.TypeIndex;
  TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TVariant<bool,float,int,unsigned_int,FString>_&&>_>
            ((TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
              *)&this->CompileArgs,&local_68,(bool *)&local_68.Value);
  if ((void *)local_50._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_50._padding_);
  }
  uVar3 = (ulonglong)local_30;
  if (4 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,float,int,unsigned_int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3] != UE::Core::Private::TDestructorCaller<bool>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,float,int,unsigned_int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(&local_50.TypeIndex);
  }
  return;
}

