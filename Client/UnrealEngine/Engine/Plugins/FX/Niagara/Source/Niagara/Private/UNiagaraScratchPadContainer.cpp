// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// StaticClass @ 14937b120

UClass * __cdecl UNiagaraScratchPadContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScratchPadContainer",
               &Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton,
               StaticRegisterNativesUNiagaraScratchPadContainer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraScratchPadContainer>,
               InternalVTableHelperCtorCaller<UNiagaraScratchPadContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton;
}

// UNiagaraScratchPadContainer @ 149388d90

UNiagaraScratchPadContainer * __thiscall
UNiagaraScratchPadContainer::UNiagaraScratchPadContainer
          (UNiagaraScratchPadContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraScratchPadContainer__6B_;
  return this;
}

// UNiagaraScratchPadContainer @ 149388dc0

UNiagaraScratchPadContainer * __thiscall
UNiagaraScratchPadContainer::UNiagaraScratchPadContainer
          (UNiagaraScratchPadContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraScratchPadContainer__6B_;
  return this;
}

// ~UNiagaraScratchPadContainer @ 14938a900

void __thiscall
UNiagaraScratchPadContainer::~UNiagaraScratchPadContainer(UNiagaraScratchPadContainer *this)

{
  *(undefined ***)this = &___7UNiagaraScratchPadContainer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AppendScripts @ 14938f6e0

void __thiscall
UNiagaraScratchPadContainer::AppendScripts
          (UNiagaraScratchPadContainer *this,
          TArray<TObjectPtr<UNiagaraScript>,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// AppendScripts @ 14938f6f0

void __thiscall
UNiagaraScratchPadContainer::AppendScripts
          (UNiagaraScratchPadContainer *this,TObjectPtr<UNiagaraScratchPadContainer> param_1)

{
  return;
}

// CheckConsistency @ 1493973c0

void __thiscall UNiagaraScratchPadContainer::CheckConsistency(UNiagaraScratchPadContainer *this)

{
  return;
}

// FindIndexForScript @ 1493a1480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
UNiagaraScratchPadContainer::FindIndexForScript
          (UNiagaraScratchPadContainer *this,UNiagaraScript *param_1)

{
  return -1;
}

// FindScriptAtIndex @ 1493a1490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall
UNiagaraScratchPadContainer::FindScriptAtIndex(UNiagaraScratchPadContainer *this,int param_1)

{
  return (UNiagaraScript *)0x0;
}

// GetPrivateStaticClass @ 1493a7470

UClass * __cdecl UNiagaraScratchPadContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScratchPadContainer",
               &Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton,
               StaticRegisterNativesUNiagaraScratchPadContainer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraScratchPadContainer>,
               InternalVTableHelperCtorCaller<UNiagaraScratchPadContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton;
}

// PostLoad @ 1493ab780

void __thiscall UNiagaraScratchPadContainer::PostLoad(UNiagaraScratchPadContainer *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((*(uint *)&this->field_0x8 & 0x3400) == 0)) &&
          ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraScratchPadContainer **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// SetScripts @ 1493b6cf0

void __thiscall
UNiagaraScratchPadContainer::SetScripts
          (UNiagaraScratchPadContainer *this,
          TArray<TObjectPtr<UNiagaraScript>,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// StaticRegisterNativesUNiagaraScratchPadContainer @ 1493b75d0

void __cdecl UNiagaraScratchPadContainer::StaticRegisterNativesUNiagaraScratchPadContainer(void)

{
  return;
}

