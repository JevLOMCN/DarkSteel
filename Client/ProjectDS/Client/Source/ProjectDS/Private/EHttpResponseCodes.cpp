// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ResponseCodeToString @ 14bb33cc0

FString * __cdecl
EHttpResponseCodes::ResponseCodeToString(FString *__return_storage_ptr__,Type param_1)

{
  if ((int)param_1 < 0x12d) {
    if (param_1 == Ambiguous) {
      ::FString::FString(__return_storage_ptr__,L"300:Ambiguous");
      return __return_storage_ptr__;
    }
    switch(param_1) {
    case Unknown:
      ::FString::FString(__return_storage_ptr__,L"0:Unknown");
      return __return_storage_ptr__;
    case Continue:
      ::FString::FString(__return_storage_ptr__,L"100:Continue");
      return __return_storage_ptr__;
    case SwitchProtocol:
      ::FString::FString(__return_storage_ptr__,L"101:SwitchProtocol");
      return __return_storage_ptr__;
    case Ok:
      ::FString::FString(__return_storage_ptr__,L"200:Ok");
      return __return_storage_ptr__;
    case Created:
      ::FString::FString(__return_storage_ptr__,L"201:Created");
      return __return_storage_ptr__;
    case Accepted:
      ::FString::FString(__return_storage_ptr__,L"202:Accepted");
      return __return_storage_ptr__;
    case Partial:
      ::FString::FString(__return_storage_ptr__,L"203:Partial");
      return __return_storage_ptr__;
    case NoContent:
      ::FString::FString(__return_storage_ptr__,L"204:NoContent");
      return __return_storage_ptr__;
    case ResetContent:
      ::FString::FString(__return_storage_ptr__,L"205:ResetContent");
      return __return_storage_ptr__;
    case PartialContent:
      ::FString::FString(__return_storage_ptr__,L"206:PartialContent");
      return __return_storage_ptr__;
    }
  }
  else {
    switch(param_1) {
    case Moved:
      ::FString::FString(__return_storage_ptr__,L"301:Moved");
      return __return_storage_ptr__;
    case Redirect:
      ::FString::FString(__return_storage_ptr__,L"302:Redirect");
      return __return_storage_ptr__;
    case RedirectMethod:
      ::FString::FString(__return_storage_ptr__,L"303:RedirectMethod");
      return __return_storage_ptr__;
    case NotModified:
      ::FString::FString(__return_storage_ptr__,L"304:NotModified");
      return __return_storage_ptr__;
    case UseProxy:
      ::FString::FString(__return_storage_ptr__,L"305:UseProxy");
      return __return_storage_ptr__;
    case RedirectKeepVerb:
      ::FString::FString(__return_storage_ptr__,L"307:RedirectKeepVerb");
      return __return_storage_ptr__;
    case BadRequest:
      ::FString::FString(__return_storage_ptr__,L"400:BadRequest");
      return __return_storage_ptr__;
    case Denied:
      ::FString::FString(__return_storage_ptr__,L"401:Denied");
      return __return_storage_ptr__;
    case PaymentReq:
      ::FString::FString(__return_storage_ptr__,L"402:PaymentReq");
      return __return_storage_ptr__;
    case Forbidden:
      ::FString::FString(__return_storage_ptr__,L"403:Forbidden");
      return __return_storage_ptr__;
    case NotFound:
      ::FString::FString(__return_storage_ptr__,L"404:NotFound");
      return __return_storage_ptr__;
    case BadMethod:
      ::FString::FString(__return_storage_ptr__,L"405:BadMethod");
      return __return_storage_ptr__;
    case NoneAcceptable:
      ::FString::FString(__return_storage_ptr__,L"406:NoneAcceptable");
      return __return_storage_ptr__;
    case ProxyAuthReq:
      ::FString::FString(__return_storage_ptr__,L"407:ProxyAuthReq");
      return __return_storage_ptr__;
    case RequestTimeout:
      ::FString::FString(__return_storage_ptr__,L"408:RequestTimeout");
      return __return_storage_ptr__;
    case Conflict:
      ::FString::FString(__return_storage_ptr__,L"409:Conflict");
      return __return_storage_ptr__;
    case Gone:
      ::FString::FString(__return_storage_ptr__,L"410:Gone");
      return __return_storage_ptr__;
    case LengthRequired:
      ::FString::FString(__return_storage_ptr__,L"411:LengthRequired");
      return __return_storage_ptr__;
    case PrecondFailed:
      ::FString::FString(__return_storage_ptr__,L"412:PrecondFailed");
      return __return_storage_ptr__;
    case RequestTooLarge:
      ::FString::FString(__return_storage_ptr__,L"413:RequestTooLarge");
      return __return_storage_ptr__;
    case UriTooLong:
      ::FString::FString(__return_storage_ptr__,L"414:UriTooLong");
      return __return_storage_ptr__;
    case UnsupportedMedia:
      ::FString::FString(__return_storage_ptr__,L"415:UnsupportedMedia");
      return __return_storage_ptr__;
    case TooManyRequests:
      ::FString::FString(__return_storage_ptr__,L"429:TooManyRequests");
      return __return_storage_ptr__;
    case RetryWith:
      ::FString::FString(__return_storage_ptr__,L"449:RetryWith");
      return __return_storage_ptr__;
    case ServerError:
      ::FString::FString(__return_storage_ptr__,L"500:ServerError");
      return __return_storage_ptr__;
    case NotSupported:
      ::FString::FString(__return_storage_ptr__,L"501:NotSupported");
      return __return_storage_ptr__;
    case BadGateway:
      ::FString::FString(__return_storage_ptr__,L"502:BadGateway");
      return __return_storage_ptr__;
    case ServiceUnavail:
      ::FString::FString(__return_storage_ptr__,L"503:ServiceUnavail");
      return __return_storage_ptr__;
    case GatewayTimeout:
      ::FString::FString(__return_storage_ptr__,L"504:GatewayTimeout");
      return __return_storage_ptr__;
    case VersionNotSup:
      ::FString::FString(__return_storage_ptr__,L"505:VersionNotSup");
      return __return_storage_ptr__;
    }
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

