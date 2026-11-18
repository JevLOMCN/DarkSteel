// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 9

// Construct @ 14ad4b170

void __cdecl
UE::Core::Private::TCopyConstructorCaller<Metasound::FLiteral::FInvalid>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ad4b180

void __cdecl
UE::Core::Private::TCopyConstructorCaller<Metasound::FLiteral::FNone>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ad4b190

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TArray<int,TSizedDefaultAllocator<32>_>_>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1 << 2);
  return;
}

// Construct @ 14ad4b220

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TArray<float,TSizedDefaultAllocator<32>_>_>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1 << 2);
  return;
}

// Construct @ 14ad4b2b0

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1);
  return;
}

// Construct @ 14ad4b330

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>_>::
Construct(void *param_1,void *param_2)

{
  int iVar1;
  TSharedPtr<Audio::IProxyData,1> *pTVar2;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  pTVar2 = *(TSharedPtr<Audio::IProxyData,1> **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  ConstructItems<TSharedPtr<Audio::IProxyData,1>,TSharedPtr<Audio::IProxyData,1>,int>
            (*(void **)param_1,pTVar2,iVar1);
  return;
}

// Construct @ 14ad4b3b0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TArray<FString,TSizedDefaultAllocator<32>_>_>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  FString *pFVar2;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = *(FString **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  ConstructItems<FString,FString,int>(*(void **)param_1,pFVar2,iVar1);
  return;
}

// Construct @ 14ad4b430

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TArray<bool,TSizedDefaultAllocator<32>_>_>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1);
  return;
}

// Construct @ 14ad4b4b0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TSharedPtr<Audio::IProxyData,1>_>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

