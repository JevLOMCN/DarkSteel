// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dcf6140

UClass * __cdecl UMovieGraphStartEndConsoleCommands::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphStartEndConsoleCommands.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphStartEndConsoleCommands",
               &Z_Registration_Info_UClass_UMovieGraphStartEndConsoleCommands.InnerSingleton,
               StaticRegisterNativesUMovieGraphStartEndConsoleCommands,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphStartEndConsoleCommands>,
               InternalVTableHelperCtorCaller<UMovieGraphStartEndConsoleCommands>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphStartEndConsoleCommands.InnerSingleton;
}

// UMovieGraphStartEndConsoleCommands @ 14dd0b8c0

UMovieGraphStartEndConsoleCommands * __thiscall
UMovieGraphStartEndConsoleCommands::UMovieGraphStartEndConsoleCommands
          (UMovieGraphStartEndConsoleCommands *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  (this->AddStartCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddStartCommands).ArrayNum = 0;
  (this->AddStartCommands).ArrayMax = 0;
  (this->AddEndCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddEndCommands).ArrayNum = 0;
  (this->AddEndCommands).ArrayMax = 0;
  (this->RemoveStartCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoveStartCommands).ArrayNum = 0;
  (this->RemoveStartCommands).ArrayMax = 0;
  (this->RemoveEndCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoveEndCommands).ArrayNum = 0;
  (this->RemoveEndCommands).ArrayMax = 0;
  return this;
}

// UMovieGraphStartEndConsoleCommands @ 14dd0b920

UMovieGraphStartEndConsoleCommands * __thiscall
UMovieGraphStartEndConsoleCommands::UMovieGraphStartEndConsoleCommands
          (UMovieGraphStartEndConsoleCommands *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  (this->AddStartCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddStartCommands).ArrayNum = 0;
  (this->AddStartCommands).ArrayMax = 0;
  (this->AddEndCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddEndCommands).ArrayNum = 0;
  (this->AddEndCommands).ArrayMax = 0;
  (this->RemoveStartCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoveStartCommands).ArrayNum = 0;
  (this->RemoveStartCommands).ArrayMax = 0;
  (this->RemoveEndCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoveEndCommands).ArrayNum = 0;
  (this->RemoveEndCommands).ArrayMax = 0;
  return this;
}

// ~UMovieGraphStartEndConsoleCommands @ 14dd0df10

void __thiscall
UMovieGraphStartEndConsoleCommands::~UMovieGraphStartEndConsoleCommands
          (UMovieGraphStartEndConsoleCommands *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  DestructItems<FString,int>
            ((FString *)(this->RemoveEndCommands).AllocatorInstance.Data,
             (this->RemoveEndCommands).ArrayNum);
  pFVar1 = (this->RemoveEndCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->RemoveStartCommands).AllocatorInstance.Data,
             (this->RemoveStartCommands).ArrayNum);
  pFVar1 = (this->RemoveStartCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AddEndCommands).AllocatorInstance.Data,
             (this->AddEndCommands).ArrayNum);
  pFVar1 = (this->AddEndCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AddStartCommands).AllocatorInstance.Data,
             (this->AddStartCommands).ArrayNum);
  pFVar1 = (this->AddStartCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieGraphTraversableObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetMergedProperties @ 14dd28ac0

/* WARNING: Removing unreachable block (ram,0x00014dd28c73) */
/* WARNING: Removing unreachable block (ram,0x00014dd28e16) */
/* WARNING: Removing unreachable block (ram,0x00014dd28c81) */
/* WARNING: Removing unreachable block (ram,0x00014dd28e24) */

TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphStartEndConsoleCommands::GetMergedProperties
          (UMovieGraphStartEndConsoleCommands *this,
          TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FString local_98;
  FString local_88;
  FString local_78;
  FScriptContainerElement *local_68;
  undefined8 local_60;
  FString local_58;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar4 = true;
  iVar5 = (int)this->_padding_;
  puVar8 = (undefined8 *)this->_padding_;
  puVar10 = puVar8 + (longlong)iVar5 * 2;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  while( true ) {
    if ((int)this->_padding_ != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar8 == puVar10) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      ::FString::AppendChars(&local_98,L", ",2);
    }
    iVar9 = *(int *)(puVar8 + 1) + -1;
    if (*(int *)(puVar8 + 1) == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_98,(wchar_t *)*puVar8,iVar9);
    puVar8 = puVar8 + 2;
  }
  ::FString::FString(&local_78,"Start Console Commands");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_68 = local_98.Data.AllocatorInstance.Data;
  uVar2._0_4_ = local_98.Data.ArrayNum;
  uVar2._4_4_ = local_98.Data.ArrayMax;
  local_60._0_4_ = local_98.Data.ArrayNum;
  local_60._4_4_ = local_98.Data.ArrayMax;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  uVar3 = uVar2;
  if (((pFVar7 <= (FScriptContainerElement *)&local_78) &&
      (uVar3 = local_60,
      (FScriptContainerElement *)&local_78 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) &&
     (local_60 = uVar2,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       ), uVar3 = local_60, bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  local_60 = uVar3;
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_78.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_78.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_78.Data.ArrayMax;
  *(undefined8 *)(pFVar7 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x10) = local_68;
  *(int *)(pFVar7 + 0x18) = (int)local_60;
  *(int *)(pFVar7 + 0x1c) = local_60._4_4_;
  local_60 = 0;
  local_68 = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  iVar5 = (int)this->_padding_;
  bVar4 = true;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  puVar8 = (undefined8 *)this->_padding_;
  puVar10 = puVar8 + (longlong)iVar5 * 2;
  while( true ) {
    if ((int)this->_padding_ != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar8 == puVar10) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      ::FString::AppendChars(&local_88,L", ",2);
    }
    iVar9 = *(int *)(puVar8 + 1) + -1;
    if (*(int *)(puVar8 + 1) == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)*puVar8,iVar9);
    puVar8 = puVar8 + 2;
  }
  ::FString::FString(&local_58,"End Console Commands");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = local_88.Data.AllocatorInstance.Data;
  local_40._0_4_ = local_88.Data.ArrayNum;
  local_40._4_4_ = local_88.Data.ArrayMax;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_58.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_58.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_58.Data.ArrayMax;
  *(undefined8 *)(pFVar7 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x10) = local_48;
  *(int *)(pFVar7 + 0x18) = (int)local_40;
  *(int *)(pFVar7 + 0x1c) = local_40._4_4_;
  local_40 = 0;
  local_48 = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2d550

UClass * __cdecl UMovieGraphStartEndConsoleCommands::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphStartEndConsoleCommands.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphStartEndConsoleCommands",
               &Z_Registration_Info_UClass_UMovieGraphStartEndConsoleCommands.InnerSingleton,
               StaticRegisterNativesUMovieGraphStartEndConsoleCommands,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphStartEndConsoleCommands>,
               InternalVTableHelperCtorCaller<UMovieGraphStartEndConsoleCommands>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphStartEndConsoleCommands.InnerSingleton;
}

// Merge @ 14dd36ac0

void __thiscall
UMovieGraphStartEndConsoleCommands::Merge
          (UMovieGraphStartEndConsoleCommands *this,IMovieGraphTraversableObject *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  UClass *pUVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  FString *pFVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  if ((param_1 != (IMovieGraphTraversableObject *)0x0) &&
     (lVar6 = (**(code **)((longlong)*param_1 + 8))(param_1), lVar6 != 0)) {
    pUVar7 = StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14dd36b33;
  }
  lVar6 = 0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("InConsoleCommands",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphSetStartEndConsoleCommandsNode.cpp"
                     ,0xd,
                     L"UMovieGraphStartEndConsoleCommands cannot merge with null or an object of another type."
                    );
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14dd36b33:
  iVar1 = *(int *)(lVar6 + 0x58);
  pFVar8 = *(FString **)(lVar6 + 0x50);
  pFVar11 = pFVar8 + iVar1;
  while( true ) {
    if (*(int *)(lVar6 + 0x58) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar11) break;
    if (1 < (pFVar8->Data).ArrayNum) {
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)&this->_padding_,pFVar8);
    }
    pFVar8 = pFVar8 + 1;
  }
  iVar1 = *(int *)(lVar6 + 0x68);
  pFVar8 = *(FString **)(lVar6 + 0x60);
  pFVar11 = pFVar8 + iVar1;
  while( true ) {
    if (*(int *)(lVar6 + 0x68) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar8 == pFVar11) break;
    if (1 < (pFVar8->Data).ArrayNum) {
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)&(this->AddStartCommands).ArrayNum,
                 pFVar8);
    }
    pFVar8 = pFVar8 + 1;
  }
  iVar1 = *(int *)(lVar6 + 0x38);
  pFVar8 = *(FString **)(lVar6 + 0x30);
  pFVar11 = pFVar8 + iVar1;
  do {
    if (*(int *)(lVar6 + 0x38) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar8 == pFVar11) {
      iVar1 = *(int *)(lVar6 + 0x48);
      pFVar8 = *(FString **)(lVar6 + 0x40);
      pFVar11 = pFVar8 + iVar1;
      do {
        if (*(int *)(lVar6 + 0x48) != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_48);
        }
        if (pFVar8 == pFVar11) {
          return;
        }
        if (1 < (pFVar8->Data).ArrayNum) {
          puVar9 = *(undefined8 **)&(this->AddStartCommands).ArrayNum;
          puVar10 = puVar9 + (longlong)*(int *)&(this->AddEndCommands).AllocatorInstance.Data * 2;
          for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
            iVar5 = *(int *)(puVar9 + 1);
            iVar2 = (pFVar8->Data).ArrayNum;
            if (iVar5 == iVar2) {
              if (iVar5 < 2) goto LAB_14dd36cbf;
              iVar5 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)*puVar9,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data
                                );
              bVar4 = iVar5 == 0;
            }
            else {
              bVar4 = iVar5 + iVar2 == 1;
            }
            if (bVar4) goto LAB_14dd36cbf;
          }
          TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                    ((TArray<FString,TSizedDefaultAllocator<32>_> *)&this->_padding_,pFVar8);
        }
LAB_14dd36cbf:
        pFVar8 = pFVar8 + 1;
      } while( true );
    }
    if (1 < (pFVar8->Data).ArrayNum) {
      puVar9 = (undefined8 *)this->_padding_;
      puVar10 = puVar9 + (longlong)*(int *)&(this->AddStartCommands).AllocatorInstance.Data * 2;
      for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
        iVar5 = *(int *)(puVar9 + 1);
        iVar2 = (pFVar8->Data).ArrayNum;
        if (iVar5 == iVar2) {
          if (iVar5 < 2) goto LAB_14dd36c35;
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar9,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
          bVar4 = iVar5 == 0;
        }
        else {
          bVar4 = iVar5 + iVar2 == 1;
        }
        if (bVar4) goto LAB_14dd36c35;
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)&this->_padding_,pFVar8);
    }
LAB_14dd36c35:
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// StaticRegisterNativesUMovieGraphStartEndConsoleCommands @ 14dd45400

void __cdecl
UMovieGraphStartEndConsoleCommands::StaticRegisterNativesUMovieGraphStartEndConsoleCommands(void)

{
  return;
}

// _getUObject @ 14dd4dee0

UObject * __thiscall
UMovieGraphStartEndConsoleCommands::_getUObject(UMovieGraphStartEndConsoleCommands *this)

{
  return (UObject *)&this[-1].AddEndCommands.ArrayNum;
}

