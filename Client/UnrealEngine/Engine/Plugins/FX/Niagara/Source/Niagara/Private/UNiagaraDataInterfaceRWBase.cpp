// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// PostLoad @ 148e76e20

void __thiscall UNiagaraDataInterfaceRWBase::PostLoad(UNiagaraDataInterfaceRWBase *this)

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
    if (*(UNiagaraDataInterfaceRWBase **)FVar5 == this) {
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

// StaticClass @ 148e81560

UClass * __cdecl UNiagaraDataInterfaceRWBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRWBase",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRWBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRWBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRWBase>,aFStackX_8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton;
}

// CanExecuteOnTarget @ 1491718a0

bool __thiscall
UNiagaraDataInterfaceRWBase::CanExecuteOnTarget
          (UNiagaraDataInterfaceRWBase *this,ENiagaraSimTarget param_1)

{
  return true;
}

// UNiagaraDataInterfaceRWBase @ 149212fd0

UNiagaraDataInterfaceRWBase * __thiscall
UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
          (UNiagaraDataInterfaceRWBase *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceRWBase__6B_;
  return this;
}

// UNiagaraDataInterfaceRWBase @ 149213000

UNiagaraDataInterfaceRWBase * __thiscall
UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
          (UNiagaraDataInterfaceRWBase *this,FObjectInitializer *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceRWBase__6B_;
  return this;
}

// ~UNiagaraDataInterfaceRWBase @ 149215eb0

void __thiscall
UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase(UNiagaraDataInterfaceRWBase *this)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceRWBase__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// GetPrivateStaticClass @ 149236d00

UClass * __cdecl UNiagaraDataInterfaceRWBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRWBase",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRWBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRWBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRWBase>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton;
}

// StaticRegisterNativesUNiagaraDataInterfaceRWBase @ 14924f4b0

void __cdecl UNiagaraDataInterfaceRWBase::StaticRegisterNativesUNiagaraDataInterfaceRWBase(void)

{
  return;
}

