// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 5

// Construct @ 141dcf240

void __cdecl
UE::Core::Private::TMoveConstructorCaller<unsigned_int>::Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 141dcf250

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TVariant<int,unsigned_int,__int64,float,double>_>::
Construct(void *param_1,void *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = *(byte *)((longlong)param_2 + 8);
  *(byte *)((longlong)param_1 + 8) = bVar1;
  if (4 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<int,unsigned_int,__int64,float,double>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(param_1,param_2);
  return;
}

// Construct @ 141dcf260

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FString>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 141dcf290

void __cdecl
UE::Core::Private::TMoveConstructorCaller<__int64>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 141dcf2a0

void __cdecl UE::Core::Private::TMoveConstructorCaller<bool>::Construct(void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

