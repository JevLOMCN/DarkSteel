// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// TPairInitializer<FString_const_&,int_const_&> @ 14157ef10

TPairInitializer<FString_const_&,int_const_&> * __thiscall
TPairInitializer<FString_const_&,int_const_&>::TPairInitializer<FString_const_&,int_const_&>
          (TPairInitializer<FString_const_&,int_const_&> *this,FString *param_1,int *param_2)

{
  this->Key = param_1;
  this->Value = param_2;
  return this;
}

// operator<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_> @ 141723780

TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
* __thiscall
TPairInitializer<FString_&&,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_const_&>
::
operator<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
          (TPairInitializer<FString_&&,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_const_&>
           *this,TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
                 *__return_storage_ptr__)

{
  FString *pFVar1;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTVar2;
  
  pFVar1 = this->Key;
  pTVar2 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            *)this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&__return_storage_ptr__->field_0x10,pTVar2);
  return __return_storage_ptr__;
}

// operator<FTextId,FPolyglotTextData>_TTuple<FTextId,FPolyglotTextData> @ 141723800

TTuple<FTextId,FPolyglotTextData> * __thiscall
TPairInitializer<FTextId_const_&,FPolyglotTextData_const_&>::
operator<FTextId,FPolyglotTextData>_TTuple<FTextId,FPolyglotTextData>
          (TPairInitializer<FTextId_const_&,FPolyglotTextData_const_&> *this,
          TTuple<FTextId,FPolyglotTextData> *__return_storage_ptr__)

{
  FPolyglotTextData *pFVar1;
  ITextData *pIVar2;
  FTextKey FVar3;
  undefined1 local_res8 [8];
  
  pFVar1 = this->Value;
  FVar3.Index = (this->Key->Key).Index;
  *(int *)&__return_storage_ptr__->field_0x0 = (this->Key->Namespace).Index;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar3.Index;
  __return_storage_ptr__->field_0x8 = pFVar1->Category;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x10,&pFVar1->NativeCulture);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x20,&pFVar1->Namespace);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x30,&pFVar1->Key);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x40,&pFVar1->NativeString);
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x7c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x80 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x84 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x90 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x98 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->field_0x50,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&pFVar1->LocalizedStrings);
  __return_storage_ptr__->field_0xa0 = pFVar1->bIsMinimalPatch;
  *(undefined8 *)&__return_storage_ptr__->field_0xa8 = 0;
  pIVar2 = (pFVar1->CachedText).TextData.Reference;
  *(ITextData **)&__return_storage_ptr__->field_0xa8 = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  *(uint *)&__return_storage_ptr__->field_0xb0 = (pFVar1->CachedText).Flags;
  return __return_storage_ptr__;
}

// operator<FTextKey,TSharedPtr<FStringTableEntry,1>_>_TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> @ 141723c70

TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> * __thiscall
TPairInitializer<FString_&,TSharedRef<FStringTableEntry,1>_&>::
operator<FTextKey,TSharedPtr<FStringTableEntry,1>_>_TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>
          (TPairInitializer<FString_&,TSharedRef<FStringTableEntry,1>_&> *this,
          TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *__return_storage_ptr__)

{
  int iVar1;
  TSharedRef<FStringTableEntry,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  TStringView<wchar_t> local_18;
  
  pTVar2 = this->Value;
  local_18.DataPtr = (wchar_t *)(this->Key->Data).AllocatorInstance.Data;
  iVar1 = (this->Key->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  local_18.Size = iVar4;
  FTextKey::FTextKey((FTextKey *)__return_storage_ptr__,&local_18);
  *(FStringTableEntry **)&__return_storage_ptr__->field_0x8 = pTVar2->Object;
  pTVar3 = (pTVar2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator<int,FUtf8String>_TTuple<int,FUtf8String> @ 1418445f0

TTuple<int,FUtf8String> * __thiscall
TPairInitializer<int_&,FString_const_&>::operator<int,FUtf8String>_TTuple<int,FUtf8String>
          (TPairInitializer<int_&,FString_const_&> *this,
          TTuple<int,FUtf8String> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FString *pFVar3;
  FUtf8String *pFVar4;
  int iVar5;
  FUtf8String local_18;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  pFVar4 = FUtf8String::ConstructFromPtrSize
                     (&local_18,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
  if ((FUtf8String *)puVar1 != pFVar4) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&__return_storage_ptr__->field_0x10 = (pFVar4->Data).ArrayNum;
    *(int *)&__return_storage_ptr__->field_0x14 = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FString,FConfigContext::FPerPlatformDirs>_TTuple<FString,FConfigContext::FPerPlatformDirs> @ 141844d20

TTuple<FString,FConfigContext::FPerPlatformDirs> * __thiscall
TPairInitializer<FString_const_&,FConfigContext::FPerPlatformDirs_&&>::
operator<FString,FConfigContext::FPerPlatformDirs>_TTuple<FString,FConfigContext::FPerPlatformDirs>
          (TPairInitializer<FString_const_&,FConfigContext::FPerPlatformDirs_&&> *this,
          TTuple<FString,FConfigContext::FPerPlatformDirs> *__return_storage_ptr__)

{
  FPerPlatformDirs *pFVar1;
  
  pFVar1 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 =
       (pFVar1->PlatformExtensionEngineDir).Data.AllocatorInstance.Data;
  (pFVar1->PlatformExtensionEngineDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar1->PlatformExtensionEngineDir).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar1->PlatformExtensionEngineDir).Data.ArrayMax;
  (pFVar1->PlatformExtensionEngineDir).Data.ArrayNum = 0;
  (pFVar1->PlatformExtensionEngineDir).Data.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x20 =
       (pFVar1->PlatformExtensionProjectDir).Data.AllocatorInstance.Data;
  (pFVar1->PlatformExtensionProjectDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  *(int *)&__return_storage_ptr__->field_0x28 = (pFVar1->PlatformExtensionProjectDir).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x2c = (pFVar1->PlatformExtensionProjectDir).Data.ArrayMax;
  (pFVar1->PlatformExtensionProjectDir).Data.ArrayNum = 0;
  (pFVar1->PlatformExtensionProjectDir).Data.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x30 =
       (pFVar1->PlatformExtensionPluginDir).Data.AllocatorInstance.Data;
  (pFVar1->PlatformExtensionPluginDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x38 = (pFVar1->PlatformExtensionPluginDir).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x3c = (pFVar1->PlatformExtensionPluginDir).Data.ArrayMax;
  (pFVar1->PlatformExtensionPluginDir).Data.ArrayNum = 0;
  (pFVar1->PlatformExtensionPluginDir).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// operator<FString,FString>_TTuple<FString,FString> @ 141844db0

TTuple<FString,FString> * __thiscall
TPairInitializer<FString_&,TStringBuilderWithBuffer<wchar_t,128>_&>::
operator<FString,FString>_TTuple<FString,FString>
          (TPairInitializer<FString_&,TStringBuilderWithBuffer<wchar_t,128>_&> *this,
          TTuple<FString,FString> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TStringBuilderWithBuffer<wchar_t,128> *pTVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  FString local_18;
  
  pTVar2 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  pwVar3 = (wchar_t *)pTVar2->_padding_;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_18,pwVar3,(int)(pTVar2->_padding_ - (longlong)pwVar3 >> 1));
  if ((FString *)puVar1 != pFVar4) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&__return_storage_ptr__->field_0x18 = (pFVar4->Data).ArrayNum;
    *(int *)&__return_storage_ptr__->field_0x1c = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FString,FString>_TTuple<FString,FString> @ 1419033a0

TTuple<FString,FString> * __thiscall
TPairInitializer<FString_&&,TStringView<wchar_t>_&&>::
operator<FString,FString>_TTuple<FString,FString>
          (TPairInitializer<FString_&&,TStringView<wchar_t>_&&> *this,
          TTuple<FString,FString> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TStringView<wchar_t> *pTVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = this->Key;
  pTVar2 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar3->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_18,pTVar2->DataPtr,(int)*(undefined8 *)&pTVar2->Size);
  if ((FString *)puVar1 != pFVar3) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&__return_storage_ptr__->field_0x18 = (pFVar3->Data).ArrayNum;
    *(int *)&__return_storage_ptr__->field_0x1c = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_> @ 1419b54f0

TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FName_&&,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_const_&>::
operator<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FName_&&,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_const_&> *this
          ,TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  uVar4 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 4);
  }
  return __return_storage_ptr__;
}

// operator<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> @ 141ccee70

TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> * __thiscall
TPairInitializer<FString_const_&&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&&>::
operator<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>
          (TPairInitializer<FString_const_&&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&&>
           *this,TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar3 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    ConstructItems<FString,FString,int>(*(void **)puVar1,(FString *)pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

