// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// GetFloat @ 14bc9fa70

float __thiscall FDS_WidgetContext::GetFloat(FDS_WidgetContext *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,float> *pTVar3;
  undefined1 *puVar4;
  float fVar5;
  
  pTVar3 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)&this->FloatMap,*param_1);
  puVar4 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,float> *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  if (puVar4 == (undefined1 *)0x0) {
    return 0.0;
  }
  pTVar3 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)&this->FloatMap,*param_1);
  if (pTVar3 == (TTuple<FName,float> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  return *(float *)&pTVar3->field_0x8;
}

// GetInt32 @ 14bca04b0

int __thiscall FDS_WidgetContext::GetInt32(FDS_WidgetContext *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<FName,int> *pTVar4;
  undefined1 *puVar5;
  
  pTVar4 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->Int32Map,*param_1);
  puVar5 = &pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,int> *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if (puVar5 == (undefined1 *)0x0) {
    return 0;
  }
  pTVar4 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->Int32Map,*param_1);
  if (pTVar4 == (TTuple<FName,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)&pTVar4->field_0x8;
}

// GetInt64 @ 14bca0540

long64 __thiscall FDS_WidgetContext::GetInt64(FDS_WidgetContext *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,__int64> *pTVar3;
  long64 lVar4;
  undefined1 *puVar5;
  
  pTVar3 = TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
                   *)&this->Int64Map,*param_1);
  puVar5 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,__int64> *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if (puVar5 == (undefined1 *)0x0) {
    return 0;
  }
  pTVar3 = TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
                   *)&this->Int64Map,*param_1);
  if (pTVar3 == (TTuple<FName,__int64> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  return *(long64 *)&pTVar3->field_0x8;
}

// GetString @ 14bca1d10

FString * __thiscall
FDS_WidgetContext::GetString(FDS_WidgetContext *this,FString *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,FString> *pTVar3;
  FString *pFVar4;
  undefined1 *puVar5;
  
  pTVar3 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)&this->StringMap,*param_1);
  puVar5 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,FString> *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if (puVar5 == (undefined1 *)0x0) {
    ::FString::FString(__return_storage_ptr__,"");
    return __return_storage_ptr__;
  }
  pTVar3 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)&this->StringMap,*param_1);
  if (pTVar3 == (TTuple<FName,FString> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(__return_storage_ptr__,(FString *)&pTVar3->field_0x8);
  return __return_storage_ptr__;
}

// GetUObject @ 14bca2480

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
FDS_WidgetContext::GetUObject(FDS_WidgetContext *this,FName *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *pTVar4;
  TWeakObjectPtr<UObject,FWeakObjectPtr> TVar5;
  FName *in_R8;
  undefined1 *puVar6;
  undefined8 local_res8;
  
  pTVar4 = TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)this,*in_R8);
  puVar6 = &pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  if (puVar6 == (undefined1 *)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
    return (TWeakObjectPtr<UObject,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pTVar4 = TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)this,*in_R8);
  if (pTVar4 == (TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar5.WeakPtr = (FWeakObjectPtr)(*pcVar1)();
      return (TWeakObjectPtr<UObject,FWeakObjectPtr>)TVar5.WeakPtr;
    }
  }
  uVar2 = *(undefined4 *)&pTVar4->field_0xc;
  param_1->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pTVar4->field_0x8;
  param_1->Number = uVar2;
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetUint64 @ 14bca2540

long64 __thiscall FDS_WidgetContext::GetUint64(FDS_WidgetContext *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,unsigned___int64> *pTVar3;
  long64 lVar4;
  undefined1 *puVar5;
  
  pTVar3 = TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                   *)&this->Uint64Map,*param_1);
  puVar5 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,unsigned___int64> *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if (puVar5 == (undefined1 *)0x0) {
    return 0;
  }
  pTVar3 = TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                   *)&this->Uint64Map,*param_1);
  if (pTVar3 == (TTuple<FName,unsigned___int64> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  return *(long64 *)&pTVar3->field_0x8;
}

