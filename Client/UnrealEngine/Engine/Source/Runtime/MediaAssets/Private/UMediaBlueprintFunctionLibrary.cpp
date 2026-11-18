// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 12

// StaticClass @ 146c14740

UClass * __cdecl UMediaBlueprintFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUMediaBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMediaBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton;
}

// UMediaBlueprintFunctionLibrary @ 146c1cea0

UMediaBlueprintFunctionLibrary * __thiscall
UMediaBlueprintFunctionLibrary::UMediaBlueprintFunctionLibrary
          (UMediaBlueprintFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMediaBlueprintFunctionLibrary__6B_;
  return this;
}

// UMediaBlueprintFunctionLibrary @ 146c1ced0

UMediaBlueprintFunctionLibrary * __thiscall
UMediaBlueprintFunctionLibrary::UMediaBlueprintFunctionLibrary
          (UMediaBlueprintFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMediaBlueprintFunctionLibrary__6B_;
  return this;
}

// ~UMediaBlueprintFunctionLibrary @ 146c1e850

void __thiscall
UMediaBlueprintFunctionLibrary::~UMediaBlueprintFunctionLibrary
          (UMediaBlueprintFunctionLibrary *this)

{
  *(undefined ***)this = &___7UMediaBlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// EnumerateAudioCaptureDevices @ 146c26d20

/* WARNING: Removing unreachable block (ram,0x000146c26edd) */

void __cdecl
UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices
          (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FScriptContainerElement *pFVar6;
  FText *pFVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<FMediaCaptureDeviceInfo,TSizedDefaultAllocator<32>_> local_68;
  FText local_58;
  FString local_48;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  MediaCaptureSupport::EnumerateAudioCaptureDevices(&local_68);
  iVar2 = local_68.ArrayNum;
  pFVar6 = local_68.AllocatorInstance.Data + 8;
  pFVar7 = (FText *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x38);
LAB_146c26d80:
  while( true ) {
    while( true ) {
      if (local_68.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMediaCaptureDeviceInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((FText *)(pFVar6 + -8) == pFVar7) {
        DestructItems<FMediaCaptureDeviceInfo,int>
                  ((FMediaCaptureDeviceInfo *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
        if ((FMediaCaptureDeviceInfo *)local_68.AllocatorInstance.Data !=
            (FMediaCaptureDeviceInfo *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        return;
      }
      iVar4 = *(int *)(pFVar6 + 0x18);
      if (iVar4 != 1) break;
      if ((param_2 & 8U) != 0) goto LAB_146c26de9;
      pFVar6 = pFVar6 + 0x38;
    }
    if (iVar4 != 2) break;
    if ((param_2 & 1U) != 0) goto LAB_146c26de9;
    pFVar6 = pFVar6 + 0x38;
  }
  if (iVar4 == 3) {
    if ((param_2 & 4U) == 0) {
      pFVar6 = pFVar6 + 0x38;
      goto LAB_146c26d80;
    }
LAB_146c26de9:
    local_58.TextData.Reference = (((FText *)(pFVar6 + -8))->TextData).Reference;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 8))
                (local_58.TextData.Reference,local_res18);
    }
    local_58.Flags = *(uint *)pFVar6;
    ::FString::FString(&local_48,(FString *)(pFVar6 + 0x20));
    pFVar5 = (FText *)(param_1->AllocatorInstance).Data;
    if (((pFVar5 <= &local_58) && (&local_58 < pFVar5 + (longlong)param_1->ArrayMax * 2)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    pFVar5 = (FText *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x20);
    FText::FText(pFVar5,&local_58);
    pFVar5[1].TextData.Reference = (ITextData *)0x0;
    pFVar5[1].TextData.Reference = (ITextData *)local_48.Data.AllocatorInstance.Data;
    pFVar5[1].Flags = local_48.Data.ArrayNum;
    *(int *)&pFVar5[1].field_0xc = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  else if ((iVar4 == 5) && ((param_2 & 2U) != 0)) goto LAB_146c26de9;
  pFVar6 = pFVar6 + 0x38;
  goto LAB_146c26d80;
}

// EnumerateVideoCaptureDevices @ 146c26f60

/* WARNING: Removing unreachable block (ram,0x000146c2713b) */

void __cdecl
UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices
          (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FText *pFVar4;
  FScriptContainerElement *pFVar5;
  FText *pFVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<FMediaCaptureDeviceInfo,TSizedDefaultAllocator<32>_> local_68;
  FText local_58;
  FString local_48;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  MediaCaptureSupport::EnumerateVideoCaptureDevices(&local_68);
  iVar2 = local_68.ArrayNum;
  pFVar5 = local_68.AllocatorInstance.Data + 8;
  pFVar6 = (FText *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x38);
  do {
    while( true ) {
      if (local_68.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMediaCaptureDeviceInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((FText *)(pFVar5 + -8) == pFVar6) {
        DestructItems<FMediaCaptureDeviceInfo,int>
                  ((FMediaCaptureDeviceInfo *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
        if ((FMediaCaptureDeviceInfo *)local_68.AllocatorInstance.Data !=
            (FMediaCaptureDeviceInfo *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        return;
      }
      iVar3 = *(int *)(pFVar5 + 0x18);
      if (iVar3 == 4) break;
      if (iVar3 == 6) {
        bVar7 = (param_2 & 4U) == 0;
        goto LAB_146c26fec;
      }
      if (iVar3 == 7) {
        bVar7 = (param_2 & 1U) == 0;
        goto LAB_146c26fec;
      }
      if ((iVar3 == 8) && ((param_2 & 2U) != 0)) {
LAB_146c27044:
        local_58.TextData.Reference = (((FText *)(pFVar5 + -8))->TextData).Reference;
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 8))
                    (local_58.TextData.Reference,local_res18);
        }
        local_58.Flags = *(uint *)pFVar5;
        ::FString::FString(&local_48,(FString *)(pFVar5 + 0x20));
        pFVar4 = (FText *)(param_1->AllocatorInstance).Data;
        if (((pFVar4 <= &local_58) && (&local_58 < pFVar4 + (longlong)param_1->ArrayMax * 2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = param_1->ArrayNum;
        if (iVar3 == param_1->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar3 + 1;
        pFVar4 = (FText *)((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x20);
        FText::FText(pFVar4,&local_58);
        pFVar4[1].TextData.Reference = (ITextData *)0x0;
        pFVar4[1].TextData.Reference = (ITextData *)local_48.Data.AllocatorInstance.Data;
        pFVar4[1].Flags = local_48.Data.ArrayNum;
        *(int *)&pFVar4[1].field_0xc = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
LAB_146c2714f:
        pFVar5 = pFVar5 + 0x38;
      }
      else {
        if (iVar3 != 9) goto LAB_146c26fee;
        if ((param_2 & 8U) != 0) goto LAB_146c27044;
        pFVar5 = pFVar5 + 0x38;
      }
    }
    bVar7 = (param_2 & 8U) == 0;
LAB_146c26fec:
    if (!bVar7) goto LAB_146c27044;
LAB_146c26fee:
    if (iVar3 != 10) {
      if ((iVar3 == 0xb) && ((param_2 & 8U) != 0)) goto LAB_146c27044;
      goto LAB_146c2714f;
    }
    if ((param_2 & 8U) != 0) goto LAB_146c27044;
    pFVar5 = pFVar5 + 0x38;
  } while( true );
}

// EnumerateWebcamCaptureDevices @ 146c271c0

/* WARNING: Removing unreachable block (ram,0x000146c2737d) */

void __cdecl
UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices
          (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FScriptContainerElement *pFVar6;
  FText *pFVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<FMediaCaptureDeviceInfo,TSizedDefaultAllocator<32>_> local_68;
  FText local_58;
  FString local_48;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  MediaCaptureSupport::EnumerateVideoCaptureDevices(&local_68);
  iVar2 = local_68.ArrayNum;
  pFVar6 = local_68.AllocatorInstance.Data + 8;
  pFVar7 = (FText *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x38);
LAB_146c27220:
  while( true ) {
    while( true ) {
      if (local_68.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMediaCaptureDeviceInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((FText *)(pFVar6 + -8) == pFVar7) {
        DestructItems<FMediaCaptureDeviceInfo,int>
                  ((FMediaCaptureDeviceInfo *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
        if ((FMediaCaptureDeviceInfo *)local_68.AllocatorInstance.Data !=
            (FMediaCaptureDeviceInfo *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        return;
      }
      iVar4 = *(int *)(pFVar6 + 0x18);
      if (iVar4 != 4) break;
      if ((param_2 & 1U) != 0) goto LAB_146c27289;
      pFVar6 = pFVar6 + 0x38;
    }
    if (iVar4 != 9) break;
    if ((param_2 & 8U) != 0) goto LAB_146c27289;
    pFVar6 = pFVar6 + 0x38;
  }
  if (iVar4 == 10) {
    if ((param_2 & 2U) == 0) {
      pFVar6 = pFVar6 + 0x38;
      goto LAB_146c27220;
    }
LAB_146c27289:
    local_58.TextData.Reference = (((FText *)(pFVar6 + -8))->TextData).Reference;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 8))
                (local_58.TextData.Reference,local_res18);
    }
    local_58.Flags = *(uint *)pFVar6;
    ::FString::FString(&local_48,(FString *)(pFVar6 + 0x20));
    pFVar5 = (FText *)(param_1->AllocatorInstance).Data;
    if (((pFVar5 <= &local_58) && (&local_58 < pFVar5 + (longlong)param_1->ArrayMax * 2)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    pFVar5 = (FText *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x20);
    FText::FText(pFVar5,&local_58);
    pFVar5[1].TextData.Reference = (ITextData *)0x0;
    pFVar5[1].TextData.Reference = (ITextData *)local_48.Data.AllocatorInstance.Data;
    pFVar5[1].Flags = local_48.Data.ArrayNum;
    *(int *)&pFVar5[1].field_0xc = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  else if ((iVar4 == 0xb) && ((param_2 & 4U) != 0)) goto LAB_146c27289;
  pFVar6 = pFVar6 + 0x38;
  goto LAB_146c27220;
}

// GetPrivateStaticClass @ 146c2c8f0

UClass * __cdecl UMediaBlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUMediaBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMediaBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBlueprintFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUMediaBlueprintFunctionLibrary @ 146c37e40

void __cdecl
UMediaBlueprintFunctionLibrary::StaticRegisterNativesUMediaBlueprintFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnumerateAudioCaptureDevices @ 146c3c0c0

void __cdecl
UMediaBlueprintFunctionLibrary::execEnumerateAudioCaptureDevices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  local_res10[0] = 0;
  pTVar2 = &local_18;
  if ((TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnumerateAudioCaptureDevices(pTVar2,local_res10[0]);
  DestructItems<FMediaCaptureDevice,int>
            ((FMediaCaptureDevice *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FMediaCaptureDevice *)local_18.AllocatorInstance.Data != (FMediaCaptureDevice *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execEnumerateVideoCaptureDevices @ 146c3c1c0

void __cdecl
UMediaBlueprintFunctionLibrary::execEnumerateVideoCaptureDevices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  local_res10[0] = 0;
  pTVar2 = &local_18;
  if ((TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnumerateVideoCaptureDevices(pTVar2,local_res10[0]);
  DestructItems<FMediaCaptureDevice,int>
            ((FMediaCaptureDevice *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FMediaCaptureDevice *)local_18.AllocatorInstance.Data != (FMediaCaptureDevice *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execEnumerateWebcamCaptureDevices @ 146c3c2c0

void __cdecl
UMediaBlueprintFunctionLibrary::execEnumerateWebcamCaptureDevices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  local_res10[0] = 0;
  pTVar2 = &local_18;
  if ((TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FMediaCaptureDevice,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnumerateWebcamCaptureDevices(pTVar2,local_res10[0]);
  DestructItems<FMediaCaptureDevice,int>
            ((FMediaCaptureDevice *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FMediaCaptureDevice *)local_18.AllocatorInstance.Data != (FMediaCaptureDevice *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

