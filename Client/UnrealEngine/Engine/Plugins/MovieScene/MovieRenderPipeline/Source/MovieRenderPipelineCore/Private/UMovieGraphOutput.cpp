// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dc66ee0

UClass * __cdecl UMovieGraphOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphOutput",
               &Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton,
               StaticRegisterNativesUMovieGraphOutput,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphOutput>,
               InternalVTableHelperCtorCaller<UMovieGraphOutput>,local_res8,
               UMovieGraphInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton;
}

// UMovieGraphOutput @ 14dc73740

UMovieGraphOutput * __thiscall
UMovieGraphOutput::UMovieGraphOutput(UMovieGraphOutput *this,FVTableHelper *param_1)

{
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this,param_1);
  this->field_0x70 = 1;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UMovieGraphOutput__6B_;
  this->field_0x78 = 1;
  return this;
}

// ~UMovieGraphOutput @ 14dc74830

void __thiscall UMovieGraphOutput::~UMovieGraphOutput(UMovieGraphOutput *this)

{
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  return;
}

// CanRename @ 14dc78870

bool __thiscall UMovieGraphOutput::CanRename(UMovieGraphOutput *this,FText *param_1,FText *param_2)

{
  ITextData *pIVar1;
  void *_Src;
  FScriptContainerElement *_Src_00;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FString *pFVar6;
  FText *pFVar7;
  longlong lVar8;
  TRefCountPtr<ITextData> TVar9;
  ForAnyElementType *local_res20;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FText local_28;
  
  bVar2 = UMovieGraphMember::CanRename((UMovieGraphMember *)this,param_1,param_2);
  if (!bVar2) {
    return false;
  }
  pUVar4 = UMovieGraphConfig::StaticClass();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (pUVar5 != (UObject *)0x0) {
    local_28.Flags = *(uint *)&pUVar5[3].field_0x8;
    lVar8 = (longlong)(int)local_28.Flags;
    _Src = *(void **)(pUVar5 + 3);
    local_28.TextData.Reference = (ITextData *)0x0;
    if (local_28.Flags == 0) {
      local_28._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_28.Flags,0,(ForAnyElementType *)&local_28,local_28.Flags,
                 (int *)&local_28.field_0xc);
      memcpy(local_28.TextData.Reference,_Src,lVar8 << 3);
    }
    pFVar6 = FText::ToString(param_1);
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = (pFVar6->Data).ArrayNum;
    lVar8 = (longlong)local_30;
    _Src_00 = (pFVar6->Data).AllocatorInstance.Data;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,_Src_00,lVar8 * 2);
    }
    local_res20 = &local_38;
    pIVar1 = local_28.TextData.Reference + (int)local_28.Flags;
    for (TVar9.Reference = local_28.TextData.Reference; TVar9.Reference != pIVar1;
        TVar9.Reference = TVar9.Reference + 1) {
      bVar2 = `UMovieGraphMember::IsUniqueNameInMemberArray<UMovieGraphOutput>'::__l2::<lambda_1>::
              operator()(&local_res20,(UMovieGraphOutput *)*TVar9.Reference);
      if (bVar2) {
        if (local_30 == *(int *)&this->field_0x58) {
          if (local_30 < 2) break;
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_38.Data,*(wchar_t **)&this->field_0x50);
          bVar2 = iVar3 == 0;
        }
        else {
          bVar2 = local_30 + *(int *)&this->field_0x58 == 1;
        }
        if (!bVar2) {
          bVar2 = true;
          goto LAB_14dc789d3;
        }
        break;
      }
    }
    bVar2 = false;
LAB_14dc789d3:
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_28.TextData.Reference);
    }
    if (bVar2) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"MovieGraphConfig",L"InvalidOutputRename_Exists",
                          L"An output with this name already exists.");
      FText::operator=(param_2,pFVar7);
      if (local_28.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return false;
    }
  }
  return true;
}

// GetPrivateStaticClass @ 14dc821e0

UClass * __cdecl UMovieGraphOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphOutput",
               &Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton,
               StaticRegisterNativesUMovieGraphOutput,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphOutput>,
               InternalVTableHelperCtorCaller<UMovieGraphOutput>,local_res8,
               UMovieGraphInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton;
}

// IsDeletable @ 14dc842c0

bool __thiscall UMovieGraphOutput::IsDeletable(UMovieGraphOutput *this)

{
  int iVar1;
  
  iVar1 = *(int *)&this->field_0x58;
  if (iVar1 != UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum) {
    return iVar1 + UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum != 1;
  }
  if (1 < iVar1) {
    iVar1 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)&this->field_0x50,
                       (wchar_t *)UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data)
    ;
    return iVar1 != 0;
  }
  return false;
}

// SetMemberName @ 14dc89590

bool __thiscall UMovieGraphOutput::SetMemberName(UMovieGraphOutput *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  FText *pFVar3;
  FText FStack_28;
  FText FStack_18;
  
  FText::FText(&FStack_28);
  pcVar1 = *(code **)(*(longlong *)this + 0x2b8);
  pFVar3 = FText::FromString(&FStack_18,param_1);
  cVar2 = (*pcVar1)(this,pFVar3,&FStack_28);
  if (FStack_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
  }
  if (cVar2 != '\0') {
    ::FString::operator=((FString *)&this->field_0x50,param_1);
  }
  if (FStack_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
  }
  return cVar2 != '\0';
}

// StaticRegisterNativesUMovieGraphOutput @ 14dc89c70

void __cdecl UMovieGraphOutput::StaticRegisterNativesUMovieGraphOutput(void)

{
  return;
}

