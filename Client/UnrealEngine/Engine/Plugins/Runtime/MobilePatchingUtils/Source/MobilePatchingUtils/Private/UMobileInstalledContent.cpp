// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MobilePatchingUtils
// Functions: 12

// StaticClass @ 14f03bdc0

UClass * __cdecl UMobileInstalledContent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobileInstalledContent",
               &Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton,
               StaticRegisterNativesUMobileInstalledContent,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMobileInstalledContent>,
               InternalVTableHelperCtorCaller<UMobileInstalledContent>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton;
}

// UMobileInstalledContent @ 14f03cf80

UMobileInstalledContent * __thiscall
UMobileInstalledContent::UMobileInstalledContent
          (UMobileInstalledContent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMobileInstalledContent__6B_;
  (this->InstallDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallDir).Data.ArrayNum = 0;
  (this->InstallDir).Data.ArrayMax = 0;
  (this->InstalledManifest).Object = (IBuildManifest *)0x0;
  (this->InstalledManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMobileInstalledContent @ 14f03cfc0

UMobileInstalledContent * __thiscall
UMobileInstalledContent::UMobileInstalledContent
          (UMobileInstalledContent *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMobileInstalledContent__6B_;
  (this->InstallDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallDir).Data.ArrayNum = 0;
  (this->InstallDir).Data.ArrayMax = 0;
  (this->InstalledManifest).Object = (IBuildManifest *)0x0;
  (this->InstalledManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMobileInstalledContent @ 14f03d120

void __thiscall UMobileInstalledContent::~UMobileInstalledContent(UMobileInstalledContent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMobileInstalledContent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstalledManifest).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->InstallDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDiskFreeSpace @ 14f03de40

float __thiscall UMobileInstalledContent::GetDiskFreeSpace(UMobileInstalledContent *this)

{
  bool bVar1;
  float fVar2;
  double dVar3;
  ulong64 local_res8 [4];
  
  local_res8[1] = 0;
  local_res8[0] = 0;
  bVar1 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                    (&this->InstallDir,local_res8 + 1,local_res8);
  fVar2 = 0.0;
  if (bVar1) {
    if (-1 < (longlong)local_res8[0]) {
      dVar3 = FUnitConversion::Convert<double>((double)(longlong)local_res8[0],Bytes,Megabytes);
      return (float)dVar3;
    }
    dVar3 = FUnitConversion::Convert<double>((double)local_res8[0],Bytes,Megabytes);
    fVar2 = (float)dVar3;
  }
  return fVar2;
}

// GetInstalledContentSize @ 14f03e350

float __thiscall UMobileInstalledContent::GetInstalledContentSize(UMobileInstalledContent *this)

{
  IBuildManifest *pIVar1;
  longlong lVar2;
  double dVar3;
  
  pIVar1 = (this->InstalledManifest).Object;
  if (pIVar1 != (IBuildManifest *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 0x78))();
    dVar3 = FUnitConversion::Convert<double>((double)lVar2,Bytes,Megabytes);
    return (float)dVar3;
  }
  dVar3 = FUnitConversion::Convert<double>(0.0,Bytes,Megabytes);
  return (float)dVar3;
}

// GetPrivateStaticClass @ 14f03e700

UClass * __cdecl UMobileInstalledContent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobileInstalledContent",
               &Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton,
               StaticRegisterNativesUMobileInstalledContent,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMobileInstalledContent>,
               InternalVTableHelperCtorCaller<UMobileInstalledContent>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobileInstalledContent.InnerSingleton;
}

// Mount @ 14f03eeb0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMobileInstalledContent::Mount(UMobileInstalledContent *this,int param_1,FString *param_2)

{
  IBuildManifest *pIVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FPlatformFileManager *this_00;
  FPakPlatformFile *this_01;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FString *pFVar9;
  FString *pFVar10;
  undefined1 local_res20 [8];
  FString local_70;
  FString *local_60;
  int local_58;
  FString local_50;
  
  this_00 = FPlatformFileManager::Get();
  this_01 = (FPakPlatformFile *)FPlatformFileManager::FindPlatformFile(this_00,L"PakFile");
  if (this_01 == (FPakPlatformFile *)0x0) {
    return false;
  }
  pIVar1 = (this->InstalledManifest).Object;
  bVar4 = false;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (pIVar1 == (IBuildManifest *)0x0) {
    if (4 < (byte)LogMobilePatchingUtils._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
    }
    return false;
  }
  (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1,&local_60);
  iVar3 = local_58;
  pFVar10 = local_60 + local_58;
  pFVar9 = local_60;
  do {
    if (local_58 != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar9 == pFVar10) goto LAB_14f03f0a1;
    pFVar6 = FPaths::GetExtension(&local_50,pFVar9,false);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar7,L"pak");
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (iVar5 == 0) {
      ::operator/(&local_70,&this->InstallDir,pFVar9);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar8.Data = local_70.Data.AllocatorInstance.Data;
      }
      bVar4 = FPakPlatformFile::Mount
                        (this_01,(wchar_t *)FVar8.Data,param_1,(wchar_t *)pFVar2,true,
                         (FPakListEntry *)0x0);
      if (!bVar4) {
        if (1 < (byte)LogMobilePatchingUtils._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
        }
        bVar4 = false;
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
LAB_14f03f0a1:
        DestructItems<FString,int>(local_60,local_58);
        if (local_60 == (FString *)0x0) {
          return bVar4;
        }
        FMemory::Free(local_60);
        return bVar4;
      }
      if (4 < (byte)LogMobilePatchingUtils._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils)
        ;
      }
      bVar4 = true;
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// StaticRegisterNativesUMobileInstalledContent @ 14f040260

void __cdecl UMobileInstalledContent::StaticRegisterNativesUMobileInstalledContent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMobileInstalledContent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDiskFreeSpace @ 14f0404e0

void __cdecl
UMobileInstalledContent::execGetDiskFreeSpace(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetDiskFreeSpace((UMobileInstalledContent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetInstalledContentSize @ 14f040730

void __cdecl
UMobileInstalledContent::execGetInstalledContentSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  double dVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[1].field_0x10 == (longlong *)0x0) {
    dVar2 = 0.0;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)&param_1[1].field_0x10 + 0x78))();
    dVar2 = (double)lVar1;
  }
  dVar2 = FUnitConversion::Convert<double>(dVar2,Bytes,Megabytes);
  *(float *)param_3 = (float)dVar2;
  return;
}

// execMount @ 14f040940

void __cdecl UMobileInstalledContent::execMount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  bVar2 = Mount((UMobileInstalledContent *)param_1,local_res10[0],&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

