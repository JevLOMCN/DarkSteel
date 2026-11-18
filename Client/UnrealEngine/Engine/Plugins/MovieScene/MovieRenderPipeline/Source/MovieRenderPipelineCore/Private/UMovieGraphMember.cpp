// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 19

// StaticClass @ 14dc663f0

UClass * __cdecl UMovieGraphMember::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMember",
               &Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton,
               StaticRegisterNativesUMovieGraphMember,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphMember>,
               InternalVTableHelperCtorCaller<UMovieGraphMember>,local_res8,
               UMovieGraphValueContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton;
}

// UMovieGraphMember @ 14dc736f0

UMovieGraphMember * __thiscall
UMovieGraphMember::UMovieGraphMember(UMovieGraphMember *this,FVTableHelper *param_1)

{
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this,param_1);
  this->bIsEditable = true;
  this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UMovieGraphMember @ 14dc747e0

void __thiscall UMovieGraphMember::~UMovieGraphMember(UMovieGraphMember *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  return;
}

// operator() @ 14dc75940

bool __thiscall
`UMovieGraphMember::IsUniqueNameInMemberArray<UMovieGraphInput>'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphInput *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)&param_1->field_0x58;
  lVar3 = (longlong)local_10;
  puVar1 = *(undefined8 **)this;
  _Src = *(void **)&param_1->field_0x50;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 2);
  }
  iVar2 = *(int *)(puVar1 + 1);
  if (local_10 == iVar2) {
    if (local_10 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_18.Data,(wchar_t *)*puVar1);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_10 == 1;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return bVar4;
}

// operator() @ 14dc75a10

bool __thiscall
`UMovieGraphMember::IsUniqueNameInMemberArray<UMovieGraphOutput>'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphOutput *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)&param_1->field_0x58;
  lVar3 = (longlong)local_10;
  puVar1 = *(undefined8 **)this;
  _Src = *(void **)&param_1->field_0x50;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 2);
  }
  iVar2 = *(int *)(puVar1 + 1);
  if (local_10 == iVar2) {
    if (local_10 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_18.Data,(wchar_t *)*puVar1);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_10 == 1;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return bVar4;
}

// operator() @ 14dc75ae0

bool __thiscall
`UMovieGraphMember::IsUniqueNameInMemberArray<UMovieGraphVariable>'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphVariable *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = (int)param_1->_padding_;
  lVar3 = (longlong)local_10;
  puVar1 = *(undefined8 **)this;
  _Src = (void *)param_1->_padding_;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 2);
  }
  iVar2 = *(int *)(puVar1 + 1);
  if (local_10 == iVar2) {
    if (local_10 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_18.Data,(wchar_t *)*puVar1);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + local_10 == 1;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return bVar4;
}

// CanRename @ 14dc786a0

bool __thiscall UMovieGraphMember::CanRename(UMovieGraphMember *this,FText *param_1,FText *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  FText *pFVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&InvalidChars,"\"\',\n\r\t");
      atexit(`UMovieGraphMember::CanRename'::__l2::_dynamic_atexit_destructor_for__InvalidChars__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = FText::IsEmptyOrWhitespace(param_1);
  if (bVar1) {
    pwVar7 = L"The name cannot be empty.";
    pwVar6 = L"InvalidMemberRename_Empty";
    goto LAB_14dc787e8;
  }
  pFVar3 = FText::ToString(param_1);
  iVar2 = (pFVar3->Data).ArrayNum;
  if (iVar2 == UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)
                         UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data);
      bVar1 = iVar2 == 0;
      goto LAB_14dc7872d;
    }
  }
  else {
    bVar1 = UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum + iVar2 == 1;
LAB_14dc7872d:
    if (!bVar1) {
      pFVar3 = FText::ToString(param_1);
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      lVar5 = (longlong)local_28.Data.ArrayNum;
      _Src = (pFVar3->Data).AllocatorInstance.Data;
      if (local_28.Data.ArrayNum == 0) {
        local_28.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,
                   local_28.Data.ArrayNum,&local_28.Data.ArrayMax);
        memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
      }
      bVar1 = ::FName::IsValidXName(&local_28,&InvalidChars,param_2,(FText *)0x0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return bVar1;
    }
  }
  pwVar7 = L"The name cannot be \'Globals\'.";
  pwVar6 = L"InvalidMemberRename_Globals";
LAB_14dc787e8:
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_18,L"MovieGraphConfig",pwVar6,pwVar7);
  FText::operator=(param_2,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

// GetOwningGraph @ 14dc81710

UMovieGraphConfig * __thiscall UMovieGraphMember::GetOwningGraph(UMovieGraphMember *this)

{
  UClass *pUVar1;
  UMovieGraphConfig *pUVar2;
  
  pUVar1 = UMovieGraphConfig::StaticClass();
  pUVar2 = (UMovieGraphConfig *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1)
  ;
  return pUVar2;
}

// GetPrivateStaticClass @ 14dc82120

UClass * __cdecl UMovieGraphMember::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMember",
               &Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton,
               StaticRegisterNativesUMovieGraphMember,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphMember>,
               InternalVTableHelperCtorCaller<UMovieGraphMember>,local_res8,
               UMovieGraphValueContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton;
}

// IsDeletable @ 14dc842b0

bool __thiscall UMovieGraphMember::IsDeletable(UMovieGraphMember *this)

{
  return true;
}

// IsEditable @ 14dc84320

bool __thiscall UMovieGraphMember::IsEditable(UMovieGraphMember *this)

{
  return this->bIsEditable;
}

// SetMemberName @ 14dc894f0

bool __thiscall UMovieGraphMember::SetMemberName(UMovieGraphMember *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  FText *pFVar3;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  pcVar1 = *(code **)(this->_padding_ + 0x2b8);
  pFVar3 = FText::FromString(&local_18,param_1);
  cVar2 = (*pcVar1)(this,pFVar3,&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (cVar2 != '\0') {
    ::FString::operator=(&this->Name,param_1);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return cVar2 != '\0';
}

// StaticRegisterNativesUMovieGraphMember @ 14dc89c30

void __cdecl UMovieGraphMember::StaticRegisterNativesUMovieGraphMember(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphMember_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCanRename @ 14dc900f0

void __cdecl UMovieGraphMember::execCanRename(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar4 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar4 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,pFVar3,pFVar4);
  *(undefined1 *)param_3 = uVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetGuid @ 14dc93180

void __cdecl UMovieGraphMember::execGetGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[2].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetMemberName @ 14dc93590

void __cdecl UMovieGraphMember::execGetMemberName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[2].field_0x8;
  _Src = *(void **)(param_1 + 2);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execIsDeletable @ 14dc95b70

void __cdecl UMovieGraphMember::execIsDeletable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsEditable @ 14dc95bb0

void __cdecl UMovieGraphMember::execIsEditable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execSetMemberName @ 14dc97970

void __cdecl UMovieGraphMember::execSetMemberName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_18);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

