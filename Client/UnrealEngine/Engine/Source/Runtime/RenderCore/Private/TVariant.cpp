// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// Get<FRDGScope_RHI> @ 145d844a0

FRDGScope_RHI * __thiscall
TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
Get<FRDGScope_RHI>(TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>
                   *this)

{
  code *pcVar1;
  bool bVar2;
  FRDGScope_RHI *pFVar3;
  
  if (this->TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGScope_RHI *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRDGScope_RHI *)this;
}

// Get<int> @ 145e3cc10

int * __thiscall
TVariant<bool,float,int,unsigned_int,FString>::Get<int>
          (TVariant<bool,float,int,unsigned_int,FString> *this)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  
  if (this->TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar3 = (int *)(*pcVar1)();
      return piVar3;
    }
  }
  return (int *)this;
}

// Get<unsigned_int> @ 145e3cc60

uint * __thiscall
TVariant<bool,float,int,unsigned_int,FString>::Get<unsigned_int>
          (TVariant<bool,float,int,unsigned_int,FString> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  
  if (this->TypeIndex != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uint *)(*pcVar1)();
      return puVar3;
    }
  }
  return (uint *)this;
}

// Get<FString> @ 145e3ccb0

FString * __thiscall
TVariant<bool,float,int,unsigned_int,FString>::Get<FString>
          (TVariant<bool,float,int,unsigned_int,FString> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (this->TypeIndex != '\x04') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FString *)this;
}

// IsType<unsigned_int> @ 145e3dcc0

bool __thiscall
TVariant<bool,float,int,unsigned_int,FString>::IsType<unsigned_int>
          (TVariant<bool,float,int,unsigned_int,FString> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (4 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<unsigned_int,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

// IsType<FString> @ 145e3dd10

bool __thiscall
TVariant<bool,float,int,unsigned_int,FString>::IsType<FString>
          (TVariant<bool,float,int,unsigned_int,FString> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (4 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

// TVariant<bool,float,int,unsigned_int,FString> @ 145e40630

TVariant<bool,float,int,unsigned_int,FString> * __thiscall
TVariant<bool,float,int,unsigned_int,FString>::TVariant<bool,float,int,unsigned_int,FString>
          (TVariant<bool,float,int,unsigned_int,FString> *this,
          TVariant<bool,float,int,unsigned_int,FString> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<bool,float,int,unsigned_int,FString> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (4 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<bool,float,int,unsigned_int,FString> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<bool,float,int,unsigned_int,FString>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  return this;
}

