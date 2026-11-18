// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// StaticClass @ 1441f2850

UClass * __cdecl UDataStreamDefinitions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStreamDefinitions",
               &Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton,
               StaticRegisterNativesUDataStreamDefinitions,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataStreamDefinitions>,
               InternalVTableHelperCtorCaller<UDataStreamDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton;
}

// UDataStreamDefinitions @ 1441f90c0

UDataStreamDefinitions * __thiscall
UDataStreamDefinitions::UDataStreamDefinitions(UDataStreamDefinitions *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UDataStreamDefinitions__6B_;
  (this->DataStreamDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataStreamDefinitions).ArrayNum = 0;
  (this->DataStreamDefinitions).ArrayMax = 0;
  this->bFixupComplete = false;
  return this;
}

// UDataStreamDefinitions @ 1441f9100

UDataStreamDefinitions * __thiscall
UDataStreamDefinitions::UDataStreamDefinitions(UDataStreamDefinitions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataStreamDefinitions__6B_;
  (this->DataStreamDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataStreamDefinitions).ArrayNum = 0;
  (this->DataStreamDefinitions).ArrayMax = 0;
  return this;
}

// ~UDataStreamDefinitions @ 1441f9ec0

void __thiscall UDataStreamDefinitions::~UDataStreamDefinitions(UDataStreamDefinitions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataStreamDefinitions__6B_;
  pFVar1 = (this->DataStreamDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FindDefinition @ 144208f10

FDataStreamDefinition * __thiscall
UDataStreamDefinitions::FindDefinition(UDataStreamDefinitions *this,int param_1)

{
  FDataStreamDefinition *pFVar1;
  FDataStreamDefinition *pFVar2;
  
  pFVar1 = (FDataStreamDefinition *)(this->DataStreamDefinitions).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->DataStreamDefinitions).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FDataStreamDefinition *)0x0;
    }
    if (param_1 == pFVar1->StreamIndex) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindDefinition @ 144208f40

FDataStreamDefinition * __thiscall
UDataStreamDefinitions::FindDefinition(UDataStreamDefinitions *this,FName param_1)

{
  FDataStreamDefinition *pFVar1;
  FDataStreamDefinition *pFVar2;
  
  pFVar1 = (FDataStreamDefinition *)(this->DataStreamDefinitions).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->DataStreamDefinitions).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FDataStreamDefinition *)0x0;
    }
    if (param_1 == pFVar1->DataStreamName) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FixupDefinitions @ 144209630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataStreamDefinitions::FixupDefinitions(UDataStreamDefinitions *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  UPackage *pUVar5;
  FString *pFVar6;
  FName FVar8;
  FName *pFVar9;
  FName *this_00;
  uint uVar10;
  FName *pFVar11;
  FUObjectCppClassStaticFunctions local_res8;
  FScriptContainerElement *local_a8;
  undefined4 uStack_9c;
  uint uStack_8c;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FString local_38;
  size_t sVar7;
  
  if (this->bFixupComplete == false) {
    this_00 = (FName *)(this->DataStreamDefinitions).AllocatorInstance.Data;
    iVar1 = (this->DataStreamDefinitions).ArrayNum;
    pFVar11 = this_00 + (longlong)iVar1 * 4;
    uVar10 = 0;
    while( true ) {
      if ((this->DataStreamDefinitions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDataStreamDefinition,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (this_00 == pFVar11) break;
      if (1 < (byte)LogIris._0_1_) {
        pFVar4 = (FName *)(this->DataStreamDefinitions).AllocatorInstance.Data;
        pFVar9 = pFVar4 + (longlong)(this->DataStreamDefinitions).ArrayNum * 4;
        for (; pFVar4 != pFVar9; pFVar4 = pFVar4 + 4) {
          if ((*this_00 == *pFVar4) && (this_00 != pFVar4)) {
            ::FName::GetPlainNameString(this_00,&local_88);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            break;
          }
        }
        if (1 < (byte)LogIris._0_1_) {
          if (Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton == (UEnum *)0x0) {
            pUVar5 = Z_Construct_UPackage__Script_IrisCore();
            Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton =
                 GetStaticEnum(Z_Construct_UEnum_IrisCore_EDataStreamSendStatus,(UObject *)pUVar5,
                               L"EDataStreamSendStatus");
          }
          bVar2 = UEnum::IsValidEnumValue
                            (Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton,
                             (longlong)(char)this_00[3].ComparisonIndex.Value);
          if (!bVar2) {
            ::FName::GetPlainNameString(this_00,&local_78);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      pFVar6 = ::FName::ToString(this_00 + 1,&local_48);
      if ((pFVar6->Data).ArrayNum == 0) {
        local_a8 = (FScriptContainerElement *)0x15060d16c;
LAB_1442097fc:
        sVar7 = wcslen((wchar_t *)local_a8);
        iVar3 = (int)sVar7;
      }
      else {
        local_a8 = (pFVar6->Data).AllocatorInstance.Data;
        iVar3 = 0;
        if (local_a8 != (FScriptContainerElement *)0x0) goto LAB_1442097fc;
      }
      if (Z_Registration_Info_UClass_UDataStream.InnerSingleton == (UClass *)0x0) {
        local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/IrisCore",L"DataStream",
                   &Z_Registration_Info_UClass_UDataStream.InnerSingleton,
                   UDataStream::StaticRegisterNativesUDataStream,0x50,8,
                   CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
                   InternalConstructor<UDataStream>,InternalVTableHelperCtorCaller<UDataStream>,
                   &local_res8,UObject::StaticClass,UObject::StaticClass);
      }
      local_68._8_8_ = (ulonglong)uStack_8c << 0x20;
      local_58._12_4_ = uStack_9c;
      local_58.Size = iVar3;
      local_68.DataPtr = (wchar_t *)0x0;
      local_58.DataPtr = (wchar_t *)local_a8;
      FVar8 = (FName)StaticLoadClass(Z_Registration_Info_UClass_UDataStream.InnerSingleton,
                                     (UObject *)0x0,&local_58,&local_68,0x2000,(UPackageMap *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar8);
      }
      this_00[2] = FVar8;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((1 < (byte)LogIris._0_1_) && (this_00[2] == (FName)0x0)) {
        ::FName::GetPlainNameString(this_00 + 1,&local_38);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      this_00[3].Number = uVar10;
      this_00 = this_00 + 4;
      uVar10 = uVar10 + 1;
    }
    this->bFixupComplete = true;
  }
  return;
}

// GetPrivateStaticClass @ 14420baf0

UClass * __cdecl UDataStreamDefinitions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStreamDefinitions",
               &Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton,
               StaticRegisterNativesUDataStreamDefinitions,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataStreamDefinitions>,
               InternalVTableHelperCtorCaller<UDataStreamDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamDefinitions.InnerSingleton;
}

// GetStreamIndex @ 14420db30

int __cdecl UDataStreamDefinitions::GetStreamIndex(FDataStreamDefinition *param_1)

{
  return param_1->StreamIndex;
}

// GetStreamNamesToAutoCreateOrRegister @ 14420db40

void __thiscall
UDataStreamDefinitions::GetStreamNamesToAutoCreateOrRegister
          (UDataStreamDefinitions *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DataStreamDefinitions).ArrayNum;
  pFVar6 = (this->DataStreamDefinitions).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->DataStreamDefinitions).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDataStreamDefinition_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((pFVar6[0x19] != (FScriptContainerElement)0x0) ||
       (pFVar6[0x1a] != (FScriptContainerElement)0x0)) {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           *(undefined8 *)pFVar6;
    }
    pFVar6 = pFVar6 + 0x20;
  }
  return;
}

// StaticRegisterNativesUDataStreamDefinitions @ 14421bdf0

void __cdecl UDataStreamDefinitions::StaticRegisterNativesUDataStreamDefinitions(void)

{
  return;
}

